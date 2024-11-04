-- basic settings
add_rules("mode.debug", "mode.release")
add_rules("plugin.vsxmake.autoupdate")

-- set c++
set_languages("cxx20")

-- include child target's xmake.lua
includes("Dionysen/xmake.lua")
includes("OpenGL/xmake.lua")

-- for easyer
set_rundir(".")
set_policy("run.autobuild", true)
