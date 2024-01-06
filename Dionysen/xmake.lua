target("Dionysen")
set_kind("static")

-- MultiTheading DLL Debug
-- if is_mode("debug") then
--     add_cxflags("-MDd")
-- else
--     add_cxflags("-MD")
-- end

-- deps
includes("./vendor/spdlog/xmake.lua")
add_deps("spdlog")

includes("./vendor/imgui-docking/xmake.lua")
add_deps("imgui-docking")

includes("./vendor/stb_image/xmake.lua")
add_deps("stb_image")

includes("./vendor/msdf-atlas-gen/xmake.lua")
add_deps("msdf-atlas-gen")


add_packages("glfw", "glew", "glm", "shaderc", "spirv-cross")

if is_plat("macosx") then
    add_linkdirs("/opt/local/lib")
    add_includedirs("/opt/local/include")
end

-- src
add_includedirs(
    "./src",
    "./src/Dionysen/Core",
    "./src/Dionysen/Event",
    "./src/Dionysen/ImGui",
    "./src/Dionysen/Utils",
    "./src/Dionysen/Renderer",
    "./src/Dionysen/Scene",
    "./src/Platform/Windows",
    "./src/Platform/Linux",
    "./src/Platform/OpenGL",
    { public = true }
)

add_files(
    "./src/Dionysen/Core/*.cpp",
    "./src/Dionysen/ImGui/*.cpp",
    "./src/Dionysen/Renderer/*.cpp",
    "./src/Dionysen/Scene/*.cpp",
    "./src/Platform/OpenGL/*.cpp",
    "./src/Platform/Linux/*.cpp",
    "./src/Platform/Windows/*.cpp"
)

-- pch
set_pcxxheader("./src/dspch.h")
add_includedirs("./src")

-- system headers
--     add_sysincludedirs("C:\\mingw64\\include", {public = true})
-- add_cxxflags("-isystem C:/mingw64/include", {force = true})

-- macro
if is_plat("windows") then
    add_defines(
        "DION_PLATFORM_WINDOWS",
        "DION_BUILD_DLL",
        "GLFW_INCLUDE_NONE"
    )
    add_links("opengl32")
    add_links("comdlg32")
elseif is_plat("linux") then
    add_defines(
        "DION_PLATFORM_LINUX"
    )
end
