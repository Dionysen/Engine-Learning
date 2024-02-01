target("Gobang")
    set_kind("binary")
    add_deps("Dionysen")
    
    includes("../Dionysen")
    add_includedirs("../Dionysen")

    includes("../Dionysen/vendor/imgui")
    add_deps("imgui")

    add_includedirs("./src", "./src/Robot")
    add_files("./src/*.cpp", "./src/Robot/*.cpp")

    if is_plat("windows") then
        add_defines("DION_PLATFORM_WINDOWS")
        add_links("opengl32")
    end

    -- libraries
    if is_plat("macosx") then
        add_linkdirs("/opt/local/lib")
        add_includedirs("/opt/local/include")
    end
    
    add_packages("glfw", "glm", "glew")