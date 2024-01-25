{
    files = {
        "src/charset-parser.cpp"
    },
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-Iinclude",
            "-I../artery-font/headers",
            "-I../msdfgen",
            "-I../msdfgen/core",
            "-I../msdfgen/ext"
        }
    },
    depfiles_gcc = "build/.objs/msdf-atlas-gen/linux/x86_64/release/src/charset-parser.cpp.o:  src/charset-parser.cpp include/Charset.h include/types.h include/utf8.h\
"
}