{
    files = {
        "msdfgen/main.cpp"
    },
    depfiles_gcc = "main.o: msdfgen/main.cpp\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-Imsdfgen",
            "-Imsdfgen/core",
            "-Imsdfgen/ext",
            "-isystem",
            "/usr/include/freetype2",
            "-isystem",
            "/usr/include/libpng16"
        }
    }
}