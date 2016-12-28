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

# Aesthetic adaptations for iOS
module ios

import calculator
import ::ios

redef class CalculatorWindow
	init do title = "app.nit Calculator"
end

redef class TextInput
	init do set_ios_style(native)

	private fun set_ios_style(objc_text_field: UITextField)
	in "ObjC" `{
		objc_text_field.textAlignment = NSTextAlignmentCenter;
	`}
end
