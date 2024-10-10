
add_rules("mode.debug", "mode.release")

target("Test")
    set_kind("binary")
    add_files("src/*.cpp")
    add_packages("gtest")

    include_deps("Dionysen")
    add_deps("Dionysen")
    
    -- add_ldflags("/ENTRY:mainCRTStartup", {force = true})

    add_packages("glfw", "glm", "glew", "msdf-atlas-gen")

    

    -- platform
    if is_plat("windows") then
        add_defines("DION_PLATFORM_WINDOWS", "WIN32","DION_DEBUG")
        add_links("opengl32")
        add_cxxflags("-EHsc", "/utf-8")
    end

    if is_plat("macosx") then
        add_linkdirs("/opt/local/lib")
        add_includedirs("/opt/local/include")
    end