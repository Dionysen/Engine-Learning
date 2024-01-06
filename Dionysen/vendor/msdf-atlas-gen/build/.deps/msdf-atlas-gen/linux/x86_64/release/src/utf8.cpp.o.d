{
    files = {
        "src/utf8.cpp"
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
    depfiles_gcc = "build/.objs/msdf-atlas-gen/linux/x86_64/release/src/utf8.cpp.o:  src/utf8.cpp include/utf8.h include/types.h\
"
}