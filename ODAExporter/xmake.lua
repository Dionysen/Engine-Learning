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

target("oda-test")
    set_kind("binary")
    -- add source files
    add_includedirs_recursively("src")
    add_includedirs_recursively("Teigha/include")
    add_files_recursively("src")
    
    set_runtimes("MDd")
    add_cxflags("/utf-8", "/wd4828", "/wd4251", "/D_ITERATOR_DEBUG_LEVEL=2")


    includes("../Dionysen/vendor/imgui-docking")
    add_deps("imgui-docking")

    add_linkdirs("Teigha/lib/vc14_amd64dlldbg", "Teigha/exe/vc14_amd64dlldbg")
    add_links(
        "ACCAMERA",
        "TD_AcisBuilder",
        "TD_Key",
        "TD_DbCore",
        "TD_Db",
        "TD_DbRoot",
        "TD_DbEntities",
        "TD_ExamplesCommon",
        "TD_Root",
        "TD_Gs",
        "TD_Gi",
        "TD_Ge",
        "TD_Alloc",
        "TD_DrawingsExamplesCommon",
        "TD_DbIO")
        
    -- For Dionysen
    includes("../Dionysen")
    add_deps("Dionysen")
    add_includedirs("../Dionysen")

    includes("../Dionysen/vendor/imgui")
    add_deps("imgui")

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