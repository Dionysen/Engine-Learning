target("Editor")
    set_kind("binary")
    
    includes("../Dionysen")
    add_includedirs("../Dionysen")
    add_deps("Dionysen")

    includes("../Dionysen/vendor/imgui-docking")
    add_deps("imgui-docking")

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
    end
    
    add_packages("glfw", "glm", "glew", "msdf-atlas-gen", "spdlog")
    
    set_runtimes("MDd")
    add_cxflags("/utf-8", "/wd4828", "/wd4251", "/D_ITERATOR_DEBUG_LEVEL=2")