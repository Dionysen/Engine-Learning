target("Gobang")
    set_kind("binary")
    add_deps("Dionysen")

    -- Delete shader cache
    before_build(function (target)
        local dir_to_delete = path.join(target:scriptdir(), "../assets")
        -- if exist, delete directory
         if os.isdir(dir_to_delete) then
            print("Deleting shader cache directory: " .. dir_to_delete)
            os.rmdir(dir_to_delete)
        else
            print("Shader cache does not exist: " .. dir_to_delete)
        end
    end)

    includes("../Dionysen")
    add_includedirs("../Dionysen")

    includes("../Dionysen/vendor/imgui")
    add_deps("imgui")

    add_includedirs("./src", "./src/Robot")
    add_headerfiles("./src/*.h", "./src/Robot/*.h", "./shaders/*")
    add_files("./src/*.cpp", "./src/Robot/*.cpp")

    if is_plat("windows") then
        add_defines("DION_PLATFORM_WINDOWS", "WIN32")
        add_links("opengl32")
    end

    -- libraries
    if is_plat("macosx") then
        add_linkdirs("/opt/local/lib")
        add_includedirs("/opt/local/include")
    end
    
    add_packages("glfw", "glm", "glew")

    add_cxxflags("-EHsc", "/utf-8")