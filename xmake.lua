add_rules("mode.debug", "mode.release")
add_rules("plugin.vsxmake.autoupdate")

-- requires
add_requires("glfw", "glew", "glm", "shaderc", "spirv-cross", "box2d", "yaml-cpp","assimp")
-- add_requires("mono", "qt5widgets", "qt5core", "qt5gui")
-- set c++
set_languages("cxx20")

-- include child target's xmake.lua
includes("Dionysen/xmake.lua")
includes("Archives/Gobang/xmake.lua")

-- for easyer
set_rundir(".")
set_policy("run.autobuild", true)

-- if debug
set_rules("mode.debug")
