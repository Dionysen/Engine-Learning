add_requires("freetype", "tinyxml2")
target("msdf-atlas-gen")
    set_kind("static")
    add_packages("freetype", "tinyxml2")
    add_includedirs(
        ".",
        "msdfgen",
        "msdf-atlas-gen",
        "msdfgen/core",
        "msdfgen/ext",
        "artery-font-format", {public = true}
    )

    add_files(
        "msdfgen/*.cpp",
        "msdfgen/core/*.cpp",
        "msdfgen/ext/*.cpp",
        "msdf-atlas-gen/*.cpp"
    )

    set_languages("cxx20")