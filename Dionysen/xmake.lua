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

    add_packages("glfw", "glew", "glm", "shaderc", "spirv-cross", "box2d", "yaml-cpp")

    -- add_includedirs("./vendor/msdf-atlas-gen/msdf-atlas-gen",
    --                 "./vendor/msdf-atlas-gen/msdfgen",
    --                 "./vendor/msdf-atlas-gen/artery-font-format",
    --                 "./vendor/mono/include"
    --             )

    -- add_linkdirs("./vendor/msdf-atlas-gen")
    -- add_links("msdf-atlas-gen", "msdfgen-core", "msdfgen-ext")

    if is_plat("macosx") then
        add_linkdirs("/opt/local/lib")
        add_includedirs("/opt/local/include")
    end

    -- src
    add_includedirs(
        "./src",
        "./vendor/entt/include",
        "./src/Dionysen/Core",
        "./src/Dionysen/Event",
        "./src/Dionysen/ImGui",
        "./src/Dionysen/Utils",
        "./src/Dionysen/Renderer",
        "./src/Dionysen/Scene",
        "./src/Dionysen/Math",
        "./src/Dionysen/Scripting",
        "./src/Dionysen/Physics",
        "./src/Dionysen/Project",
        "./src/Dionysen/UI",
        "./src/Dionysen/Debug",
        "./src/Platform/Windows",
        "./src/Platform/Linux",
        "./src/Platform/OpenGL",
        "./vendor/mono/include",
        { public = true }
    )
    -- for vs solution
    add_headerfiles(  
        "./src/*.h",
        "./src/Dionysen/Core/*.h",
        "./src/Dionysen/Event/*.h",
        "./src/Dionysen/ImGui/*.h",
        "./src/Dionysen/Utils/*.h",
        "./src/Dionysen/Renderer/*.h",
        "./src/Dionysen/Scene/*.h",
        "./src/Dionysen/Math/*.h",
        "./src/Dionysen/Scripting/*.h",
        "./src/Dionysen/Physics/*.h",
        "./src/Dionysen/Project/*.h",
        "./src/Dionysen/UI/*.h",
        "./src/Dionysen/Debug/*.h",
        "./src/Platform/Windows/*.h",
        "./src/Platform/Linux/*.h",
        "./src/Platform/OpenGL/*.h")

    add_files(
        "./src/Dionysen/Core/*.cpp",
        "./src/Dionysen/ImGui/*.cpp",
        "./src/Dionysen/Renderer/*.cpp",
        "./src/Dionysen/Scene/*.cpp",
        "./src/Dionysen/Math/*.cpp",
        "./src/Dionysen/Scripting/*.cpp",
        "./src/Dionysen/Project/*.cpp",
        "./src/Platform/OpenGL/*.cpp",
        "./src/Platform/Linux/*.cpp",
        "./src/Platform/Windows/*.cpp",
        "./src/Platform/MacOS/*.cpp"
    )

    -- pch
    set_pcxxheader("./src/dspch.h")
    add_includedirs("./src")

    -- macro
    if is_plat("windows") then
        add_defines(
            "DION_PLATFORM_WINDOWS",
            "DION_BUILD_DLL",
            "GLFW_INCLUDE_NONE"
        )
        add_links("opengl32","comdlg32")
        add_cxxflags("-EHsc", "/utf-8")
    elseif is_plat("linux") then
        add_defines(
            "DION_PLATFORM_LINUX"
        )
    elseif is_plat("macosx") then
        add_defines(
            "DION_PLATFORM_MACOSX"
        )
    end

    
    if is_plat("windows") then
        add_linkdirs("./vendor/mono/lib/Debug")
        add_links("mono-2.0-sgen")
    else
        add_linkdirs("/usr/local/opt/mono/lib") 
        add_links("monosgen-2.0")   
    end

