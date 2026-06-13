-- tree-sitter-sinq grammar
-- Copyright (C) 2026 Veitangie
-- SPDX-License-Identifier: GPL-3.0-or-later

local os_map = {
	Linux = "linux",
	OSX = "macos",
	Windows = "windows",
}

local arch_map = {
	x64 = "x64",
	arm64 = "arm64",
}

local ext_map = {
	Linux = "so",
	OSX = "dylib",
	Windows = "dll",
}

local sys_os = os_map[jit.os]
local sys_arch = arch_map[jit.arch]
local sys_ext = ext_map[jit.os]

if not sys_os or not sys_arch then
	error(string.format("Error: Unsupported platform (%s %s). Please compile manually.", jit.os, jit.arch))
end

local target_ext = jit.os == "Windows" and "dll" or "so"
local file_name = string.format("tree-sitter-sinq-%s-%s.%s", sys_os, sys_arch, sys_ext)
local url = "https://github.com/Veitangie/tree-sitter-sinq/releases/latest/download/" .. file_name

if jit.os == "Windows" then
	os.execute("if not exist parser mkdir parser")
else
	os.execute("mkdir -p parser")
end

local output_path = string.format("parser/sinq.%s", target_ext)
local cmd = string.format("curl -L --fail --silent --show-error -o %s %s", output_path, url)

local success = os.execute(cmd)

if not (success == true or success == 0) then
	error("Failed to install tree-sitter-sinq parser", 1)
end
