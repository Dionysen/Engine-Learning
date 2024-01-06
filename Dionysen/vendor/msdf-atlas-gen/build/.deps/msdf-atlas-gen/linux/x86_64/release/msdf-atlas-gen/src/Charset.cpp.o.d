{
    files = {
        "msdf-atlas-gen/src/Charset.cpp"
    },
    depfiles_gcc = "Charset.o: msdf-atlas-gen/src/Charset.cpp  msdf-atlas-gen/include/Charset.h msdf-atlas-gen/include/types.h\
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