{
    files = {
        "msdf-atlas-gen/src/RectanglePacker.cpp"
    },
    depfiles_gcc = "RectanglePacker.o: msdf-atlas-gen/src/RectanglePacker.cpp  msdf-atlas-gen/include/RectanglePacker.h  msdf-atlas-gen/include/Rectangle.h\
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