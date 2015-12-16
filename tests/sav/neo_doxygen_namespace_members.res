# Graph
Edge
=type=4:ROOT
=properties=JsonObject(0):
{}
----
=from=Node
=labels=Array(3):
3:foo
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"foo"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"foo"}

Edge
=type=7:PROJECT
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"foo"}
----
=to=Node
=labels=Array(3):
3:foo
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"foo"}

Edge
=type=6:PARENT
=properties=JsonObject(0):
{}
----
=from=Entity#12:namespacefoo
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(2):
{"name":"foo","mdoc":["A documented namespace."]}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"foo"}

Edge
=type=5:NESTS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(1):
{"name":"foo"}
----
=to=Entity#12:namespacefoo
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(2):
{"name":"foo","mdoc":["A documented namespace."]}

Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#12:namespacefoo
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(2):
{"name":"foo","mdoc":["A documented namespace."]}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(3):
{"location":"/dev/null:1,1--1,1","name":"foo","mdoc":["A documented namespace."]}

Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(3):
{"location":"/dev/null:1,1--1,1","name":"foo","mdoc":["A documented namespace."]}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"(self)","mdoc":["A documented namespace."],"location":"/dev/null:1,1--1,1"}

Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
7:MModule
=properties=JsonObject(3):
{"location":"/dev/null:1,1--1,1","name":"foo","mdoc":["A documented namespace."]}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"/dev/null:1,1--1,1","is_intro":true,"name":"(self)","mdoc":["A documented namespace."]}

Edge
=type=7:DEFINES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
13:MAttributeDef
=properties=JsonObject(3):
{"location":"/dev/null:1,1--1,1","name":"bar","is_intro":true}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
10:MAttribute
=properties=JsonObject(2):
{"visibility":"public","name":"bar"}

Edge
=type=7:PROJECT
=properties=JsonObject(0):
{}
----
=from=Entity#12:namespacefoo
=labels=Array(3):
3:foo
7:MEntity
6:MGroup
=properties=JsonObject(2):
{"name":"foo","mdoc":["A documented namespace."]}
----
=to=Node
=labels=Array(3):
3:foo
7:MEntity
8:MProject
=properties=JsonObject(1):
{"name":"foo"}

Edge
=type=9:CLASSTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"(self)","mdoc":["A documented namespace."],"location":"/dev/null:1,1--1,1"}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"(self)"}

Edge
=type=5:CLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"(self)"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"(self)","mdoc":["A documented namespace."],"location":"/dev/null:1,1--1,1"}

Edge
=type=9:BOUNDTYPE
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"/dev/null:1,1--1,1","is_intro":true,"name":"(self)","mdoc":["A documented namespace."]}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
5:MType
10:MClassType
=properties=JsonObject(1):
{"name":"(self)"}

Edge
=type=6:MCLASS
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"/dev/null:1,1--1,1","is_intro":true,"name":"(self)","mdoc":["A documented namespace."]}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
6:MClass
=properties=JsonObject(5):
{"kind":"class","visibility":"public","name":"(self)","mdoc":["A documented namespace."],"location":"/dev/null:1,1--1,1"}

Edge
=type=10:INTRODUCES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"/dev/null:1,1--1,1","is_intro":true,"name":"(self)","mdoc":["A documented namespace."]}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
10:MAttribute
=properties=JsonObject(2):
{"visibility":"public","name":"bar"}

Edge
=type=14:INTRO_CLASSDEF
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
9:MProperty
10:MAttribute
=properties=JsonObject(2):
{"visibility":"public","name":"bar"}
----
=to=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"/dev/null:1,1--1,1","is_intro":true,"name":"(self)","mdoc":["A documented namespace."]}

Edge
=type=8:DECLARES
=properties=JsonObject(0):
{}
----
=from=Entity#0:
=labels=Array(3):
3:foo
7:MEntity
9:MClassDef
=properties=JsonObject(4):
{"location":"/dev/null:1,1--1,1","is_intro":true,"name":"(self)","mdoc":["A documented namespace."]}
----
=to=Entity#0:
=labels=Array(4):
3:foo
7:MEntity
8:MPropDef
13:MAttributeDef
=properties=JsonObject(3):
{"location":"/dev/null:1,1--1,1","name":"bar","is_intro":true}


