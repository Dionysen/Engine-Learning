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

-- if debug
set_rules("mode.debug")

set_runtimes("MDd")
-- add_cxflags("/utf-8", "/wd4828", "/wd4251", "/D_ITERATOR_DEBUG_LEVEL=2")
-- add_ldflags("/NODEFAULTLIB:libcmt.lib", "/NODEFAULTLIB:libcpmt.lib", {force = true})