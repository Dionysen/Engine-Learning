add_rules("mode.debug", "mode.release")
add_rules("plugin.vsxmake.autoupdate")

-- requires
add_requires("glfw", "glew", "glm", "spirv-cross", "box2d 2.4.2", "yaml-cpp", "assimp", "gtest", {configs = {shared = true, runtimes = "MDd"}})

add_requires("shaderc", "spdlog")
-- set c++
set_languages("cxx20")

-- include child target's xmake.lua
includes("Dionysen/xmake.lua")
includes("ODAExporter/xmake.lua")

-- includes("Archives/Flybird/xmake.lua")
-- Test target
-- includes("Test/win32_opengl/xmake.lua")

-- for easyer
set_rundir(".")
set_policy("run.autobuild", true)

-- if debug
set_rules("mode.debug")

set_runtimes("MDd")
add_cxflags("/utf-8", "/wd4828", "/wd4251", "/D_ITERATOR_DEBUG_LEVEL=2")
add_ldflags("/NODEFAULTLIB:libcmt.lib", "/NODEFAULTLIB:libcpmt.lib", {force = true})