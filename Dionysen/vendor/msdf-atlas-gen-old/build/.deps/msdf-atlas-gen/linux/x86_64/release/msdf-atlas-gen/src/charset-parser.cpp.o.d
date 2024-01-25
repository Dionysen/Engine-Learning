{
    files = {
        "msdf-atlas-gen/src/charset-parser.cpp"
    },
    depfiles_gcc = "charset-parser.o: msdf-atlas-gen/src/charset-parser.cpp  msdf-atlas-gen/include/Charset.h msdf-atlas-gen/include/types.h  msdf-atlas-gen/include/utf8.h\
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