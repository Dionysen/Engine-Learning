add_rules("mode.debug", "mode.release")

add_requires("glfw", "glew", "glm")

set_languages("cxx23")

-- include子项目的xmake.lua

includes("Dionysen/xmake.lua")
includes("Gobang/xmake.lua")