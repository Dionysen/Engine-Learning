-- ===============================================
-- ================== FUNCTIONS ==================
-- ===============================================

-- Recursively traverse all folders and their subfolders. If .h or .hpp files are found, add the folder to the project.
function add_includedirs_recursively(dir)
    local has_header_files = false
    for _, file in ipairs(os.files(path.join(dir, "*.h"))) do
        has_header_files = true
        break
    end
    for _, file in ipairs(os.files(path.join(dir, "*.hpp"))) do
        has_header_files = true
        break
    end
    if has_header_files then
        add_includedirs(dir, { public = true })
        add_headerfiles(dir .. "/*.h", { public = true })
    end
    
    for _, subdir in ipairs(os.dirs(path.join(dir, "*"))) do
        add_includedirs_recursively(subdir)
    end
end 


-- Recursively traverse all folders under the folder, find .cpp files and add them to the project.
function add_files_recursively(dir)
    for _, filepath in ipairs(os.files(path.join(dir, "**.cpp"))) do
        add_files(filepath)
    end
    -- Recursively traverse subfolders
    for _, subdir in ipairs(os.dirs(path.join(dir, "*"))) do
        add_files_recursively(subdir)
    end
end

-- Include all deps under the folder
function include_deps(dir)
    for _, file in ipairs(os.files(path.join(dir, "*/xmake.lua"))) do
        local folder_name = path.basename(path.directory(file))
        includes(file)
    end
end



-- ============================================
-- ================== TARGET ==================
-- ============================================

target("Dionysen")
    -- Set the target type to static library
    set_kind("static")

    -- add dependencies
    include_deps("vendor")
    add_deps("entt", "spdlog", "mono", "imgui-docking", "imguizmo", "msdf-atlas-gen", "stb_image")

    -- add packages
    add_packages("glfw", "glew", "shaderc", "spirv-cross", "box2d", "yaml-cpp", "assimp", "glm", "gtest")

    -- add source files
    add_includedirs_recursively("src")
    add_files_recursively("src")

    -- add precompiled header
    set_pcxxheader("src/dspch.h")
    
    -- Define GLFW_WINDOW
    add_defines("GLFW_WINDOW")

    -- platform
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
