add_requires("freetype2","freetype", "tinyxml2")
target("msdf-atlas-gen")
    set_kind("static")
    add_packages("freetype2", "freetype","tinyxml2")
    add_includedirs(
        ".",
        "msdfgen",
        "msdf-atlas-gen",
        "msdfgen/core",
        "msdfgen/ext",
        "artery-font-format", 
        {public = true}
    )

    if is_plat("linux") then
        add_includedirs("/usr/include/freetype2")
    end

    add_files(
        "msdfgen/*.cpp",
        "msdfgen/core/*.cpp",
        "msdfgen/ext/*.cpp",
        "msdf-atlas-gen/*.cpp"
    )

    set_languages("cxx20")