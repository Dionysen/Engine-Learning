target("Dionysen")
set_kind("static")
-- deps
includes("./vendor/spdlog/xmake.lua")
add_deps("spdlog")

includes("./vendor/imgui-docking/xmake.lua")
add_deps("imgui-docking")

includes("./vendor/stb_image/xmake.lua")
add_deps("stb_image")

includes("./vendor/imguizmo/xmake.lua")
add_deps("imguizmo")

includes("./vendor/msdf-atlas-gen/xmake.lua")
add_deps("msdf-atlas-gen")

add_packages("glfw", "glew", "glm", "shaderc", "spirv-cross", "box2d", "yaml-cpp", "assimp")

-- src
add_includedirs(
    "src",
    "vendor/entt/include",
    "src/Dionysen/Core",
    "src/Dionysen/Event",
    "src/Dionysen/ImGui",
    "src/Dionysen/Utils",
    "src/Dionysen/Renderer",
    "src/Dionysen/Scene",
    "src/Dionysen/Math",
    "src/Dionysen/Scripting",
    "src/Dionysen/Physics",
    "src/Dionysen/Project",
    "src/Dionysen/UI",
    "src/Dionysen/Debug",
    "src/Platform/Windows",
    "src/GraphicAPI/OpenGL",
    "vendor/mono/include",
    "src/Platform/GLFW",
    { public = true }
)
-- for vs solution
add_headerfiles(
    "src/*.h",
    "src/Dionysen/Core/*.h",
    "src/Dionysen/Event/*.h",
    "src/Dionysen/ImGui/*.h",
    "src/Dionysen/Utils/*.h",
    "src/Dionysen/Renderer/*.h",
    "src/Dionysen/Scene/*.h",
    "src/Dionysen/Math/*.h",
    "src/Dionysen/Scripting/*.h",
    "src/Dionysen/Physics/*.h",
    "src/Dionysen/Project/*.h",
    "src/Dionysen/UI/*.h",
    "src/Dionysen/Debug/*.h",
    "src/Platform/Windows/*.h",
    "src/GraphicAPI/OpenGL/*.h",
    "src/Platform/GLFW/*.h"
    )

add_files(
    "src/Dionysen/Core/*.cpp",
    "src/Dionysen/ImGui/*.cpp",
    "src/Dionysen/Renderer/*.cpp",
    "src/Dionysen/Scene/*.cpp",
    "src/Dionysen/Math/*.cpp",
    "src/Dionysen/Scripting/*.cpp",
    "src/Dionysen/Project/*.cpp",
    "src/Dionysen/Debug/*.cpp",
    "src/GraphicAPI/OpenGL/*.cpp",
    "src/Platform/Linux/*.cpp",
    "src/Platform/Windows/*.cpp",
    "src/Platform/MacOS/*.cpp",
    "src/Platform/GLFW/*.cpp"
)

-- pch
set_pcxxheader("./src/dspch.h")
add_includedirs("./src")

-- plat
if is_plat("windows") then
    add_defines(
        "DION_PLATFORM_WINDOWS",
        "DION_BUILD_DLL",
        "GLFW_INCLUDE_NONE"
    )

    add_links("opengl32", "comdlg32")
    add_cxxflags("-EHsc", "/utf-8")

    add_linkdirs("./vendor/mono/lib/Debug")
    add_links("mono-2.0-sgen")
elseif is_plat("linux") then
    add_defines(
        "DION_PLATFORM_LINUX"
    )
    add_packages("mono", "qt5widgets", "qt5core", "qt5gui")
    add_includedirs(
        "/usr/include/qt/QtWidgets",
        "/usr/include/qt",
        "/usr/include/qt/QtCore"
    )
elseif is_plat("macosx") then
    add_defines(
        "DION_PLATFORM_MACOSX"
    )
    add_packages("qt5widgets", "qt5core", "qt5gui")
    add_linkdirs("/usr/local/opt/mono/lib")
    add_links("monosgen-2.0")

    add_linkdirs("/opt/local/lib")
    add_includedirs("/opt/local/include")
end
