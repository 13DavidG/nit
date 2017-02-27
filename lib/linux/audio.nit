# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2015 Romain Chanoir  <romain.chanoir@viacesi.fr>
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

# Linux audio implementation
module audio

import app::audio
import linux

redef class PlayableAudio

	redef fun play do
		if path.has_suffix(".wav") then
			sys.system "aplay -q {app.assets_dir}{path} &"
		else if path.has_suffix(".mp3") then
			sys.system "mpg123 -q {app.assets_dir}{path} &"
		end
	end

	redef fun load do end
	redef fun pause do end
	redef fun resume do end
end
