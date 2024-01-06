add_rules("mode.debug", "mode.release")

-- requires
add_requires("glfw", "glew", "glm", "shaderc","spirv-cross")

-- set c++
set_languages("cxx20")

-- include child target's xmake.lua
includes("Dionysen/xmake.lua")
includes("Gobang/xmake.lua")

-- for easyer
set_rundir(".")
-- set_policy("run.autobuild", true)

-- if debug
set_rules("mode.debug")

-- set_repo("default", "https://gitee.com/tboox/tbox.git")