
add_requires("freetype2")

target("msdfgen")
    set_kind("static")
    add_includedirs(".", "./core", "./ext", {public = true})
    add_files("./main.cpp", "./ext/*.cpp")

    add_packages("freetype2")