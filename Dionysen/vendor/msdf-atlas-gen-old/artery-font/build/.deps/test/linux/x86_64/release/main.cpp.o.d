{
    files = {
        "main.cpp"
    },
    depfiles_gcc = "main.o: main.cpp\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-Iartery-font/headers",
            "-DMSDFGEN_PUBLIC=",
            "-isystem",
            "/home/dionysen/.xmake/packages/m/msdfgen/v1.10/cb381b301ca44aa081fd6ee1313c2c22/include"
        }
    }
}