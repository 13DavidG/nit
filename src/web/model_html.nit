# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Translate mentities to html blocks.
module model_html

import model
import model::model_collect
import doc::doc_down
import html::bootstrap

redef class MEntity

	# Returns the MEntity name escaped for html.
	#
	# * MPackage: `foo`
	# * MGroup: `foo`
	# * MModule: `foo`
	# * MClass: `Foo[E]`
	# * MClassDef: `Foo[E]`
	# * MProperty: `foo(e)`
	# * MPropdef: `foo(e)`
	var html_name: String is lazy do return name.html_escape

	# MEntity namespace escaped for html.
	fun html_raw_namespace: String is abstract

	# Link to MEntity in the web server.
	# TODO this should be parameterizable... but how?
	fun html_link: Link do return new Link("/doc/{html_raw_namespace}", html_name)

	# Returns the list of keyword used in `self` declaration.
	fun html_modifiers: Array[String] is abstract

	# Returns the complete MEntity declaration decorated with HTML.
	#
	# * MPackage: `package foo`
	# * MGroup: `group foo`
	# * MModule: `module foo`
	# * MClass: `private abstract class Foo[E: Object]`
	# * MClassDef: `redef class Foo[E]`
	# * MProperty: `private fun foo(e: Object): Int`
	# * MPropdef: `redef fun foo(e)`
	fun html_declaration: Template do
		var tpl = new Template
		tpl.add "<span>"
		tpl.add html_modifiers.join(" ")
		tpl.add " "
		tpl.add html_link
		tpl.add "</span>"
		return tpl
	end

	# Returns `self` namespace decorated with HTML links.
	#
	# * MPackage: `mpackage`
	# * MGroup: `mpackage(::group)`
	# * MModule: `mgroup::mmodule`
	# * MClass: `mpackage::mclass`
	# * MClassDef: `mmodule::mclassdef`
	# * MProperty: `mclass::mprop`
	# * MPropdef: `mclassdef:mpropdef`
	fun html_namespace: Template is abstract

	# Returns the synopsis and the comment of this MEntity formatted as HTML.
	var html_documentation: nullable Writable is lazy do
		var mdoc = mdoc_or_fallback
		if mdoc == null then return null
		return mdoc.html_documentation
	end

	# Returns the synopsis of this MEntity formatted as HTML.
	var html_synopsis: nullable Writable is lazy do
		var mdoc = mdoc_or_fallback
		if mdoc == null then return null
		return mdoc.html_synopsis
	end

	# Returns the the comment without the synopsis formatted as HTML.
	var html_comment: nullable Writable is lazy do
		var mdoc = mdoc_or_fallback
		if mdoc == null then return null
		return mdoc.html_comment
	end

	# Icon that will be displayed before the title
	fun html_icon: BSIcon do
		var icon = new BSIcon("tag")
		icon.css_classes.add_all(css_classes)
		return icon
	end

	# CSS classes used to decorate `self`.
	#
	# Mainly used for icons.
	var css_classes = new Array[String]

	# HTML Tree containing all the nested element of `self`.
	#
	# The nested elements depend on the type of `self`:
	# `MPackage`: root mgroup
	# `MGroup`: directly nested mgroups, mmodules
	# `MModule`: mclassdefs
	# `MClassDef`: mpropdefs
	fun html_tree: UnorderedList do
		var list = new UnorderedList
		list.add_li html_tree_li
		return list
	end

	# HTML Tree list item used by `html_tree`.
	private fun html_tree_li: ListItem do return new ListItem(html_link)
end


redef class MPackage
	redef fun html_raw_namespace do return html_name

	redef fun html_tree_li do
		var tpl = new Template
		tpl.add html_link
		var list = new UnorderedList
		var root = self.root
		if root != null then
			list.add_li root.html_tree_li
		end
		tpl.add list
		return new ListItem(tpl)
	end

	redef var html_modifiers = ["package"]
	redef fun html_namespace do return html_link
	redef var css_classes = ["public"]
end

redef class MGroup
	redef fun html_raw_namespace do
		var parent = self.parent
		if parent != null then
			return "{parent.html_raw_namespace}::{html_name}"
		end
		return "{mpackage.html_raw_namespace}::{html_name}"
	end

	redef var html_modifiers = ["group"]

	# Depends if `self` is root or not.
	#
	# * If root `mpackage`.
	# * Else `mpackage::self`.
	redef fun html_namespace do
		var tpl = new Template
		tpl.add mpackage.html_namespace
		if mpackage.root != self then
			tpl.add "::"
			tpl.add html_link
		end
		return tpl
	end

	redef var css_classes = ["public"]

	redef fun html_tree_li do
		var tpl = new Template
		tpl.add html_link
		var list = new UnorderedList
		for mgroup in in_nesting.direct_smallers do
			list.add_li mgroup.html_tree_li
		end
		for mmodule in mmodules do
			list.add_li mmodule.html_tree_li
		end
		tpl.add list
		return new ListItem(tpl)
	end
end

redef class MModule

	redef var html_modifiers = ["module"]

	# Depends if `self` belongs to a MGroup.
	#
	# * If mgroup `mgroup::self`.
	# * Else `self`.
	redef fun html_namespace do
		var mgroup = self.mgroup
		var tpl = new Template
		if mgroup != null then
			tpl.add mgroup.html_namespace
			tpl.add "::"
		end
		tpl.add html_link
		return tpl
	end

	redef fun html_raw_namespace do
		var mpackage = self.mpackage
		var mgroup = self.mgroup
		if mgroup != null then
			return "{mgroup.html_raw_namespace}::{html_name}"
		else if mpackage != null then
			return "{mpackage.html_raw_namespace}::{html_name}"
		end
		return html_name
	end

	redef var css_classes = ["public"]

	redef fun html_tree_li do
		var tpl = new Template
		tpl.add html_link
		var list = new UnorderedList
		for mclassdef in mclassdefs do
			list.add_li mclassdef.html_tree_li
		end
		tpl.add list
		return new ListItem(tpl)
	end
end

redef class MClass
	redef fun mdoc_or_fallback do return intro.mdoc

	# Format: `Foo[E]`
	redef var html_name is lazy do
		var tpl = new Template
		tpl.add name.html_escape
		if arity > 0 then
			tpl.add "["
			var parameter_names = new Array[String]
			for p in mparameters do
				parameter_names.add(p.html_name)
			end
			tpl.add parameter_names.join(", ")
			tpl.add "]"
		end
		return tpl.write_to_string
	end

	redef fun html_modifiers do return intro.html_modifiers
	redef fun html_declaration do return intro.html_declaration

	# Returns `mpackage::self`.
	redef fun html_namespace do
		var mgroup = intro_mmodule.mgroup
		var tpl = new Template
		if mgroup != null then
			tpl.add mgroup.mpackage.html_namespace
			tpl.add "::"
		end
		tpl.add "<span>"
		tpl.add html_link
		tpl.add "</span>"
		return tpl
	end

	redef fun html_raw_namespace do return intro.html_raw_namespace

	# Returns `intro.html_short_signature`.
	fun html_short_signature: Template do return intro.html_short_signature

	# Returns `intro.html_signature`.
	fun html_signature: Template do return intro.html_signature

	redef fun html_icon do return intro.html_icon
	redef fun css_classes do return intro.css_classes
end

redef class MClassDef
	redef fun html_raw_namespace do return "{mmodule.html_raw_namespace}::{html_name}"

	redef fun html_tree_li do
		var tpl = new Template
		tpl.add html_link
		var list = new UnorderedList
		for mpropdef in mpropdefs do
			list.add_li mpropdef.html_tree_li
		end
		tpl.add list
		return new ListItem(tpl)
	end

	redef fun mdoc_or_fallback do return mdoc or else mclass.mdoc_or_fallback

	# Depends if `self` is an intro or not.
	#
	# * If intro contains the visibility and kind.
	# * If redef contains the `redef` keyword and kind.
	redef fun html_modifiers do
		var res = new Array[String]
		if not is_intro then
			res.add "redef"
		else
			if mclass.visibility != public_visibility then
				res.add mclass.visibility.to_s
			end
		end
		res.add mclass.kind.to_s
		return res
	end

	# Depends if `self` is an intro or not.
	#
	# For intro: `private abstract class Foo[E: Object]`
	# For redef: `redef class Foo[E]`
	redef fun html_declaration do
		var tpl = new Template
		tpl.add "<span>"
		tpl.add html_modifiers.join(" ")
		tpl.add " "
		tpl.add html_link
		if is_intro then
			tpl.add html_signature
		else
			tpl.add html_short_signature
		end
		tpl.add "</span>"
		return tpl
	end

	# Returns `mmodule::self`
	redef fun html_namespace do
		var tpl = new Template
		tpl.add mmodule.html_namespace
		tpl.add "::<span>"
		tpl.add mclass.html_link
		tpl.add "</span>"
		return tpl
	end

	# Returns the MClassDef generic signature without static bounds.
	fun html_short_signature: Template do
		var tpl = new Template
		var mparameters = mclass.mparameters
		if not mparameters.is_empty then
			tpl.add "["
			for i in [0..mparameters.length[ do
				tpl.add mparameters[i].html_name
				if i < mparameters.length - 1 then tpl.add ", "
			end
			tpl.add "]"
		end
		return tpl
	end

	# Returns the MClassDef generic signature with static bounds.
	fun html_signature: Template do
		var tpl = new Template
		var mparameters = mclass.mparameters
		if not mparameters.is_empty then
			tpl.add "["
			for i in [0..mparameters.length[ do
				tpl.add "{mparameters[i].html_name}: "
				tpl.add bound_mtype.arguments[i].html_signature
				if i < mparameters.length - 1 then tpl.add ", "
			end
			tpl.add "]"
		end
		return tpl
	end

	redef fun css_classes do
		var set = new HashSet[String]
		if is_intro then set.add "intro"
		for m in mclass.intro.collect_modifiers do set.add m.to_cmangle
		for m in collect_modifiers do set.add m.to_cmangle
		return set.to_a
	end
end

redef class MProperty
	redef fun mdoc_or_fallback do return intro.mdoc
	redef fun html_modifiers do return intro.html_modifiers
	redef fun html_declaration do return intro.html_declaration

	# Returns `mclass::self`.
	redef fun html_namespace do
		var tpl = new Template
		tpl.add intro_mclassdef.mclass.html_namespace
		tpl.add "::<span>"
		tpl.add intro.html_link
		tpl.add "</span>"
		return tpl
	end

	redef fun html_raw_namespace do return intro.html_raw_namespace

	# Returns `intro.html_short_signature`.
	fun html_short_signature: Template do return intro.html_short_signature

	# Returns `intro.html_signature`.
	fun html_signature: Template do return intro.html_signature

	redef fun css_classes do return intro.css_classes
end

redef class MPropDef
	redef fun html_raw_namespace do return "{mclassdef.html_raw_namespace}::{html_name}"
	redef fun mdoc_or_fallback do return mdoc or else mproperty.mdoc_or_fallback

	# Depends if `self` is an intro or not.
	#
	# * If intro contains the visibility and kind.
	# * If redef contains the `redef` keyword and kind.
	redef fun html_modifiers do
		var res = new Array[String]
		if not is_intro then
			res.add "redef"
		else
			if mproperty.visibility != public_visibility then
				res.add mproperty.visibility.to_s
			end
		end
		return res
	end

	# Depends if `self` is an intro or not.
	#
	# For intro: `private fun foo(e: Object): Bar is abstract`
	# For redef: `redef fun foo(e) is cached`
	redef fun html_declaration do
		var tpl = new Template
		tpl.add "<span>"
		tpl.add html_modifiers.join(" ")
		tpl.add " "
		if is_intro then
			tpl.add html_link
			tpl.add html_signature
		else
			tpl.add mproperty.intro.html_link
			tpl.add html_short_signature
		end
		tpl.add "</span>"
		return tpl
	end

	# Returns `mclassdef::self`
	redef fun html_namespace do
		var tpl = new Template
		tpl.add mclassdef.html_namespace
		tpl.add "::"
		tpl.add html_link
		return tpl
	end

	# Returns the MPropdDef signature without static types.
	fun html_short_signature: Template is abstract

	# Returns the MPropDef signature with static types.
	fun html_signature: Template is abstract

	redef fun css_classes do
		var set = new HashSet[String]
		if is_intro then set.add "intro"
		for m in mproperty.intro.collect_modifiers do set.add m.to_cmangle
		for m in collect_modifiers do set.add m.to_cmangle
		return set.to_a
	end
end

redef class MAttributeDef

	redef fun html_modifiers do
		var res = super
		res.add "var"
		return res
	end

	redef fun html_short_signature do return new Template

	redef fun html_signature do
		var static_mtype = self.static_mtype
		var tpl = new Template
		if static_mtype != null then
			tpl.add ": "
			tpl.add static_mtype.html_signature
		end
		return tpl
	end
end

redef class MMethodDef

	# FIXME annotation should be handled in their own way
	redef fun html_modifiers do
		if mproperty.is_init then
			var res = new Array[String]
			if mproperty.visibility != public_visibility then
				res.add mproperty.visibility.to_s
			end
			return res
		end
		var res = super
		if is_abstract then
			res.add "abstract"
		else if is_intern then
			res.add "intern"
		end
		res.add "fun"
		return res
	end

	redef fun html_declaration do
		if mproperty.is_init then
			var tpl = new Template
			tpl.add "<span>"
			tpl.add html_modifiers.join(" ")
			tpl.add " "
			tpl.add html_link
			tpl.add html_signature
			tpl.add "</span>"
			return tpl
		end
		return super
	end

	redef fun html_short_signature do
		var new_msignature = self.new_msignature
		if mproperty.is_root_init and new_msignature != null then
			return new_msignature.html_short_signature
		end
		return msignature.as(not null).html_short_signature
	end

	redef fun html_signature do
		var new_msignature = self.new_msignature
		if mproperty.is_root_init and new_msignature != null then
			return new_msignature.html_signature
		end
		return msignature.as(not null).html_signature
	end
end

redef class MVirtualTypeProp
	redef fun html_link do return mvirtualtype.html_link
end

redef class MVirtualTypeDef

	redef fun html_modifiers do
		var res = super
		res.add "type"
		return res
	end

	redef fun html_short_signature do return new Template

	redef fun html_signature do
		var bound = self.bound
		var tpl = new Template
		if bound == null then return tpl
		tpl.add ": "
		tpl.add bound.html_signature
		return tpl
	end
end

redef class MType
	# Returns the signature of this type whithout bounds.
	fun html_short_signature: Template is abstract

	# Returns the signature of this type.
	fun html_signature: Template is abstract
end

redef class MClassType
	redef fun html_link do return mclass.html_link
	redef fun html_short_signature do return html_link
	redef fun html_signature do return html_link
end

redef class MNullableType
	redef fun html_short_signature do
		var tpl = new Template
		tpl.add "nullable "
		tpl.add mtype.html_short_signature
		return tpl
	end

	redef fun html_signature do
		var tpl = new Template
		tpl.add "nullable "
		tpl.add mtype.html_signature
		return tpl
	end
end

redef class MGenericType
	redef fun html_short_signature do
		var lnk = html_link
		var tpl = new Template
		tpl.add new Link.with_title(lnk.href, mclass.name.html_escape, lnk.title)
		tpl.add "["
		for i in [0..arguments.length[ do
			tpl.add arguments[i].html_short_signature
			if i < arguments.length - 1 then tpl.add ", "
		end
		tpl.add "]"
		return tpl
	end

	redef fun html_signature do
		var lnk = html_link
		var tpl = new Template
		tpl.add new Link.with_title(lnk.href, mclass.name.html_escape, lnk.title)
		tpl.add "["
		for i in [0..arguments.length[ do
			tpl.add arguments[i].html_signature
			if i < arguments.length - 1 then tpl.add ", "
		end
		tpl.add "]"
		return tpl
	end
end

redef class MParameterType
	redef fun html_short_signature do return html_link
	redef fun html_signature do return html_link
	redef fun html_raw_namespace do return html_name
end

redef class MVirtualType
	redef fun html_signature do return html_link
	redef fun html_raw_namespace do return html_name
end

redef class MSignature
	redef fun html_short_signature do
		var tpl = new Template
		if not mparameters.is_empty then
			tpl.add "("
			for i in [0..mparameters.length[ do
				tpl.add mparameters[i].html_short_signature
				if i < mparameters.length - 1 then tpl.add ", "
			end
			tpl.add ")"
		end
		return tpl
	end

	redef fun html_signature do
		var tpl = new Template
		if not mparameters.is_empty then
			tpl.add "("
			for i in [0..mparameters.length[ do
				tpl.add mparameters[i].html_signature
				if i < mparameters.length - 1 then tpl.add ", "
			end
			tpl.add ")"
		end
		var return_mtype = self.return_mtype
		if return_mtype != null then
			tpl.add ": "
			tpl.add return_mtype.html_signature
		end
		return tpl
	end
end

redef class MParameter

	# Returns `self` name and ellipsys if any.
	fun html_short_signature: Template do
		var tpl = new Template
		tpl.add name
		if is_vararg then tpl.add "..."
		return tpl
	end

	# Returns `self` name with it's static type and ellipsys if any.
	fun html_signature: Template do
		var tpl = new Template
		tpl.add "{name}: "
		tpl.add mtype.html_signature
		if is_vararg then tpl.add "..."
		return tpl
	end
end
