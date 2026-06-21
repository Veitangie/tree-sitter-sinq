-- tree-sitter-sinq grammar
-- Copyright (C) 2026 Veitangie
-- SPDX-License-Identifier: GPL-3.0-or-later

local os_map = { Linux = "linux", OSX = "macos", Windows = "windows" }
local arch_map = { x64 = "x64", arm64 = "arm64" }
local ext_map = { Linux = "so", OSX = "dylib", Windows = "dll" }

local sys_os = os_map[jit.os]
local sys_arch = arch_map[jit.arch]
local sys_ext = ext_map[jit.os]

if not sys_os or not sys_arch then
	error(string.format("Error: Unsupported platform (%s %s).", jit.os, jit.arch))
end

local source = debug.getinfo(1, "S").source
if source:sub(1, 1) == "@" then
	source = source:sub(2)
end
local script_dir = source:match("(.*[/\\])") or "./"

local target_ext = jit.os == "Windows" and "dll" or "so"
local file_name = string.format("tree-sitter-sinq-%s-%s.%s", sys_os, sys_arch, sys_ext)
local url = "https://github.com/Veitangie/tree-sitter-sinq/releases/latest/download/" .. file_name

local output_dir = script_dir .. "parser"
local output_path = output_dir .. "/sinq." .. target_ext

if jit.os == "Windows" then
	os.execute('if not exist "' .. output_dir .. '" mkdir "' .. output_dir .. '"')
else
	os.execute('mkdir -p "' .. output_dir .. '"')
end

local cmd = string.format('curl -L --fail --silent --show-error -o "%s" "%s"', output_path, url)

local success = os.execute(cmd)

if not (success == 0 or success == true) then
	error("Failed to download tree-sitter-sinq parser from GitHub.", 1)
end
