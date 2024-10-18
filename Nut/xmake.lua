target("nut")
    set_kind("binary")
    add_deps("Dionysen")

    includes("../Dionysen")
    add_includedirs("../Dionysen")

    includes("../Dionysen/vendor/imgui-docking")
    add_deps("imgui-docking")

    add_files_recursively("src")
    add_includedirs_recursively("src")


    if is_plat("windows") then
        add_defines("DION_PLATFORM_WINDOWS", "WIN32")
        add_links("opengl32")
        add_cxxflags("-EHsc", "/utf-8")
    end

    -- libraries
    if is_plat("macosx") then
        add_linkdirs("/opt/local/lib")
        add_includedirs("/opt/local/include")
    end
    
    add_packages("glfw", "glm", "glew", "msdf-atlas-gen")
