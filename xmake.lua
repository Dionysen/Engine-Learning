add_rules("mode.debug", "mode.release")
add_rules("plugin.vsxmake.autoupdate")
-- requires
add_requires("glfw", "glew", "glm", "shaderc", "spirv-cross", "box2d", "yaml-cpp", "mono")

-- set c++
set_languages("cxx20")

-- include child target's xmake.lua
includes("Dionysen/xmake.lua")
includes("game/xmake.lua")

-- for easyer
set_rundir(".")
set_policy("run.autobuild", true)

-- if debug
set_rules("mode.debug")
