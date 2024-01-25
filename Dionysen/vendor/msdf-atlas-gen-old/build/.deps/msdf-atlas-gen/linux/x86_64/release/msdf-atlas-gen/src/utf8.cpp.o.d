{
    files = {
        "msdf-atlas-gen/src/utf8.cpp"
    },
    depfiles_gcc = "utf8.o: msdf-atlas-gen/src/utf8.cpp msdf-atlas-gen/include/utf8.h  msdf-atlas-gen/include/types.h\
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