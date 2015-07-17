# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Compile Nit code to Java code
#
# 3 runtime structures are used to represent Nit instance in Java generated code:
# * `RTClass` to represent a class, it's super-type table and its VFT
# * `RTMethod` to reprensent a compiled method definition
# * `RTVal` to reprensent a Nit instance, the null value or a native value
#
# More details are given in the documentation of these 3 classes.
#
# TODO Factorize with `abstract_compiler`
module java_compiler

import rapid_type_analysis
import frontend

redef class ToolContext

	# Where to output the generated binary
	var opt_output = new OptionString("Output file", "-o", "--output")

	# Where to output tmp files
	var opt_compile_dir = new OptionString("Directory used to generate temporary files", "--compile-dir")

	redef init do
		super
		option_context.add_option(opt_output, opt_compile_dir)
	end
end

redef class ModelBuilder

	# Start the Java compiler
	fun run_java_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis) do
		var time0 = get_time
		toolcontext.info("*** GENERATING JAVA ***", 1)

		var compiler = new JavaCompiler(mainmodule, self, runtime_type_analysis)
		compiler.do_compilation

		var time1 = get_time
		toolcontext.info("*** END GENERATING JAVA: {time1-time0} ***", 2)
		write_and_make(compiler)
	end

	# Write Java code and compile it into an executable jar
	fun write_and_make(compiler: JavaCompiler) do
		var time0 = get_time
		toolcontext.info("*** WRITING JAVA ***", 1)

		compiler.compile_dir.mkdir

		var jfiles = write_java_files(compiler)

		var time1 = get_time
		toolcontext.info("*** END WRITING JAVA: {time1-time0} ***", 2)

		time0 = time1
		toolcontext.info("*** COMPILING JAVA ***", 1)

		build_with_make(compiler, jfiles)
		write_shell_script(compiler)

		time1 = get_time
		toolcontext.info("*** END COMPILING JAVA: {time1-time0} ***", 2)
	end

	# Write files managed by `compiler` into concrete files
	fun write_java_files(compiler: JavaCompiler): Array[String] do
		var jfiles = new Array[String]
		for f in compiler.files do
			var file = new FileWriter.open("{compiler.compile_dir}/{f.filename}")
			for line in f.lines do file.write(line)
			file.close
			jfiles.add(f.filename)
		end
		return jfiles
	end

	# Compile Java generated files using `make`
	fun build_with_make(compiler: JavaCompiler, jfiles: Array[String]) do
		write_manifest(compiler)
		write_makefile(compiler, jfiles)
		var compile_dir = compiler.compile_dir
		var outname = compiler.outname.to_path.filename
		toolcontext.info("make -N -C {compile_dir} -f {outname}.mk", 2)
		var res
		if toolcontext.verbose_level >= 3 then
			res = sys.system("make -B -C {compile_dir} -f {outname}.mk 2>&1")
		else
			res = sys.system("make -B -C {compile_dir} -f {outname}.mk 2>&1 > /dev/null")
		end
		if res != 0 then toolcontext.error(null, "make failed! Error code: {res}.")
	end

	# Write the Makefile used to compile Java generated files into an executable jar
	fun write_makefile(compiler: JavaCompiler, jfiles: Array[String]) do
		# list class files from jfiles
		var ofiles = new List[String]
		for f in jfiles do ofiles.add(f.strip_extension(".java") + ".class")

		var compile_dir = compiler.compile_dir
		var outname = compiler.outname.to_path.filename
		var outpath = (sys.getcwd / compiler.outname).simplify_path
		var makename = "{compile_dir}/{outname}.mk"
		var makefile = new FileWriter.open(makename)

		makefile.write("JC = javac\n")
		makefile.write("JAR = jar\n\n")

		makefile.write("all: {outpath}.jar\n\n")

		makefile.write("{outpath}.jar: {compiler.mainmodule.jname}_Main.class\n")
		makefile.write("\t$(JAR) cfm {outpath}.jar {outname}.mf {ofiles.join(" ")}\n\n")

		makefile.write("{compiler.mainmodule.jname}_Main.class:\n")
		makefile.write("\t$(JC) {jfiles.join(" ")}\n\n")

		makefile.write("clean:\n")
		makefile.write("\trm {ofiles.join(" ")} 2>/dev/null\n\n")

		makefile.close
		toolcontext.info("Generated makefile: {makename}", 2)
	end

	# Write the Java manifest file
	private fun write_manifest(compiler: JavaCompiler) do
		var compile_dir = compiler.compile_dir
		var outname = compiler.outname.to_path.filename
		var maniffile = new FileWriter.open("{compile_dir}/{outname}.mf")
		maniffile.write("Manifest-Version: 1.0\n")
		maniffile.write("Main-Class: {compiler.mainmodule.jname}_Main\n")
		maniffile.close
	end

	# Write a simple bash script that runs the jar like it was a binary generated by nitc
	private fun write_shell_script(compiler: JavaCompiler) do
		var outname = compiler.outname
		var shfile = new FileWriter.open(outname)
		shfile.write("#!/bin/bash\n")
		shfile.write("java -jar {outname}.jar \"$@\"\n")
		shfile.close
		sys.system("chmod +x {outname}")
	end
end

# Compiler that translates Nit code to Java code
class JavaCompiler
	# The main module of the program currently compiled
	var mainmodule: MModule

	# Modelbuilder used to know the model and the AST
	var modelbuilder: ModelBuilder

	# The result of the RTA (used to know live types and methods)
	var runtime_type_analysis: RapidTypeAnalysis

	# Where to generate tmp files
	var compile_dir: String is lazy do
		var dir = modelbuilder.toolcontext.opt_compile_dir.value
		if dir == null then dir = "nitj_compile"
		return dir
	end

	# Name of the generated executable
	var outname: String is lazy do
		var name = modelbuilder.toolcontext.opt_output.value
		if name == null then name = mainmodule.jname
		return name
	end

	# The list of all associated files
	# Used to generate .java files
	var files: Array[JavaCodeFile] = new Array[JavaCodeFile]

	# Force the creation of a new file
	# The point is to avoid contamination between must-be-compiled-separately files
	fun new_file(name: String): JavaCodeFile do
		var file = new JavaCodeFile(name)
		files.add(file)
		return file
	end

	# Kind of visitor to use
	type VISITOR: JavaCompilerVisitor

	# Initialize a visitor specific for the compiler engine
	fun new_visitor(filename: String): VISITOR do
		return new JavaCompilerVisitor(self, new_file(filename))
	end

	# Compile Nit code to Java
	fun do_compilation do
		modelbuilder.toolcontext.info("NOT YET IMPLEMENTED", 0)
	end
end

# The class visiting the AST
#
# A visitor is attached to one JavaCodeFile it writes into.
class JavaCompilerVisitor
	super Visitor

	# JavaCompiler used with this visitor
	type COMPILER: JavaCompiler

	# The associated compiler
	var compiler: JavaCompiler

	# The file to write generated code into
	var file: JavaCodeFile

	# Code generation

	# Add a line (will be suffixed by `\n`)
	fun add(line: String) do file.lines.add("{line}\n")

	# Add a new partial line (no `\n` suffix)
	fun addn(line: String) do file.lines.add(line)
end

# A file containing Java code.
class JavaCodeFile

	# File name
	var filename: String

	# Lines to write
	var lines: List[String] = new List[String]
end

redef class MEntity
	# A Java compatible name for `self`
	private fun jname: String do return name.to_cmangle
end
