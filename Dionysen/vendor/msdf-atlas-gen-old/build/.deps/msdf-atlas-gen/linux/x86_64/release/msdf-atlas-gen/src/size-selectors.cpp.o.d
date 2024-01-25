{
    files = {
        "msdf-atlas-gen/src/size-selectors.cpp"
    },
    depfiles_gcc = "size-selectors.o: msdf-atlas-gen/src/size-selectors.cpp  msdf-atlas-gen/include/size-selectors.h\
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