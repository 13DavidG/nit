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

#alt1 intrude import core::text::ropes
import core

var src_s = "S&éstr"
var cpstr: Text = src_s
#alt1 cpstr = new Concat(src_s, src_s)
#alt2 cpstr = new FlatBuffer.from(src_s)
#alt3 cpstr = cpstr.substring(1, 5)

var ns = new NativeString(cpstr.byte_length)
ns.fill_from(cpstr)

print ns.to_s_with_length(cpstr.byte_length)
