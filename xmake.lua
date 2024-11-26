add_rules("mode.debug", "mode.release")
add_rules("plugin.vsxmake.autoupdate")

-- requires
add_requires("glfw", "glew", "glm", "shaderc", "spirv-cross", "box2d 2.4.2", "yaml-cpp", "assimp", "gtest")

-- set c++
set_languages("cxx20")

-- include child target's xmake.lua
includes("Dionysen/xmake.lua")
includes("Projects/Flybird/xmake.lua")

-- Test target
-- includes("Test/win32_opengl/xmake.lua")

-- for easyer
set_rundir(".")
set_policy("run.autobuild", true)

-- if debug
set_rules("mode.debug")
