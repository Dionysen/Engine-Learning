{
    files = {
        "msdf-atlas-gen/src/main.cpp"
    },
    depfiles_gcc = "main.o: msdf-atlas-gen/src/main.cpp\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-Imsdf-atlas-gen/include",
            "-Iartery-font/headers",
            "-Imsdfgen",
            "-Imsdfgen/core",
            "-Imsdfgen/ext"
        }
    }
}