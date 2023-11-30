
target("Dionysen")
    set_kind("shared")

    -- deps
    includes("./vendor/spdlog/xmake.lua")
    add_deps("spdlog")

    add_packages("glfw", "glew")

    if is_plat("macosx") then
        add_linkdirs("/opt/local/lib")
        add_includedirs("/opt/local/include")
    end

    -- src
    add_includedirs("./src", "./src/Dionysen/Core", "./src/Dionysen/Event", "./src/Dionysen/Event","./src/Dionysen/Utils", "./src/Platform", {public = true})
    add_files("./src/Dionysen/Core/*.cpp", "./src/Platform/*.cpp")

    -- pch
    set_pcxxheader("./src/dspch.h")
    add_includedirs("./src")
    
    -- macro
    if is_plat("windows") then
        add_defines("DION_PLATFORM_WINDOWS", "DION_BUILD_DLL")
        add_links("opengl32")
        add_links("comdlg32")
    end
