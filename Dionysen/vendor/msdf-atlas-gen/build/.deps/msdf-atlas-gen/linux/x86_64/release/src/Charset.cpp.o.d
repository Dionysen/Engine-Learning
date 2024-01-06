{
    files = {
        "src/Charset.cpp"
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
    depfiles_gcc = "build/.objs/msdf-atlas-gen/linux/x86_64/release/src/Charset.cpp.o:  src/Charset.cpp include/Charset.h include/types.h\
"
}