abstract class ClasseAbstraite
	fun methode 
	do
		# code partag� par tous les descendants
	end
end

class ClasseComplete
special ClasseAbstraite
end

var o = new ClasseComplete
o.methode
