-- basic settings
add_rules("mode.debug", "mode.release")
add_rules("plugin.vsxmake.autoupdate")

-- requires
add_requires("glfw", "glew", "glm", "spirv-cross", "box2d 2.4.2", "yaml-cpp", "assimp", "gtest", {
    configs = {
        shared = true,
        runtimes = "MDd"
    }
})

add_requires("shaderc", "spdlog")
add_requires("imgui", {
    configs = {
        shared = true,
        runtimes = "MDd",
        glfw = true,
        opengl3 = true
    }
})

-- set c++
set_languages("cxx20")

-- include child target's xmake.lua
includes("Dionysen/xmake.lua")
-- includes("OpenGL/xmake.lua")

-- for easyer
set_rundir(".")
set_policy("run.autobuild", true)

-- if debug
set_rules("mode.debug")

set_runtimes("MDd")
