-- ============================================
-- ================== TARGET ==================
-- ============================================
includes(os.projectdir() .. "/Scripts/base/recursive.lua")

-- requires
add_requires("glfw", "glew", "glm", "spirv-cross", "box2d 2.4.2", "yaml-cpp", "assimp", "gtest", {
    configs = {
        shared = true,
        runtimes = "MD"
    }
})

add_requires("shaderc", "spdlog", {
    configs = {
        runtimes = "MD"
    }
})

add_requires("imgui", {
    configs = {
        shared = true,
        runtimes = "MD",
        glfw = true,
        opengl3 = true
    }
})
add_requireconfs("imgui.glfw", {
    configs = {
        shared = true,
        runtimes = "MD"
    }
})

target("Dionysen")
-- Set the target type to static library
set_kind("shared")

-- add dependencies
include_deps("vendor")
add_deps("entt", "mono", "msdf-atlas-gen")

-- add packages
add_packages("glfw", "spdlog", "glew", "shaderc", "spirv-cross", "box2d", "yaml-cpp", "assimp", "glm", "gtest", "imgui")

-- add source files
add_includedirs_recursively("src")
add_files_recursively("src")

add_includedirs_recursively("vendor/msdf-atlas-gen")

-- add precompiled header
set_pcxxheader("src/dspch.h")

-- Define GLFW_WINDOW
add_defines("GLFW_WINDOW")

set_runtimes("MDd")

-- platform
if is_plat("windows") then
    add_defines("DION_PLATFORM_WINDOWS", "DION_BUILD_DLL", "GLFW_INCLUDE_NONE")

elseif is_plat("macosx") then
    add_defines("DION_PLATFORM_MACOSX")
    add_packages("qt5widgets", "qt5core", "qt5gui")
end
