target("stb_image")
    set_kind("static")
    add_includedirs(".", {public = true})
    add_files("./*.cpp")
    