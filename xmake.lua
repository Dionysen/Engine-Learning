add_rules("mode.debug", "mode.release")
add_rules("plugin.vsxmake.autoupdate")
-- requires
add_requires("glfw", "glew", "glm", "shaderc", "spirv-cross")

package("msdf-atlas-gen")
    add_deps("cmake")
    set_sourcedir(path.join(os.scriptdir(), "Dionysen/vendor/msdf-atlas-gen"))
    on_install(function (package)
        local configs = {}
        table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
        table.insert(configs, "-DBUILD_SHARED_LIBS=" .. (package:config("shared") and "ON" or "OFF"))
        import("package.tools.cmake").install(package, configs)
    end)
package_end()
add_requires("msdf-atlas-gen")

-- package("devil")
--     add_deps("cmake")
--     set_sourcedir(path.join(os.scriptdir(), "Dionysen/vendor/DevIL"))
--     on_install(function (package)
--         local configs = {}
--         table.insert(configs, "-DCMAKE_BUILD_TYPE=" .. (package:debug() and "Debug" or "Release"))
--         table.insert(configs, "-DBUILD_SHARED_LIBS=" .. (package:config("shared") and "ON" or "OFF"))
--         import("package.tools.cmake").install(package, configs)
--     end)
-- package_end()

add_requires("vcpkg::devil")


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
