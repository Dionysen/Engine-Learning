{
    files = {
        "../msdfgen/main.cpp"
    },
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-I../msdfgen",
            "-I../msdfgen/core",
            "-I../msdfgen/ext",
            "-isystem",
            "/usr/include/freetype2",
            "-isystem",
            "/usr/include/libpng16"
        }
    },
    depfiles_gcc = "main.o: ../msdfgen/main.cpp\
"
}