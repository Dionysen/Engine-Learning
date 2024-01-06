
add_requires("lodepng")

target("msdf-atlas-gen")

    -- artery-font
    includes("./vendor/artery-font/xmake.lua")
    add_deps("artery-font")

    -- msdfgen
    includes("./vendor/msdfgen/xmake.lua")
    add_deps("msdfgen")

    set_kind("static")
    add_includedirs("./include", {public = true})
    add_files("./src/*.cpp")

    add_packages("lodepng")