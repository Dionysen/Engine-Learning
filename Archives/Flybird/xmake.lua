target("Flybird")
    set_kind("binary")
    add_deps("Dionysen")
    set_languages("cxx20")

    includes("../../Dionysen")
    add_includedirs("../../Dionysen")

    includes("../../Dionysen/vendor/imgui")
    add_deps("imgui")

    add_includedirs(
        "./src"
    )

    add_headerfiles(
        "./src/*.h"
    )

    add_files(
        "./src/*.cpp"
    )

    if is_plat("windows") then
        add_defines("DION_PLATFORM_WINDOWS", "WIN32")
        add_links("opengl32")
        add_cxxflags("-EHsc", "/utf-8")
    elseif is_plat("macosx") then
        add_linkdirs("/opt/local/lib")
        add_defines("DION_PLATFORM_MACOSX")
        add_includedirs("/opt/local/include")
    end

    add_packages("glfw", "glm", "glew", "spdlog")
