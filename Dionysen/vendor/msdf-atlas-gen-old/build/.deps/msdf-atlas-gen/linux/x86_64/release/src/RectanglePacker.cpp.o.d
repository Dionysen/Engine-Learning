{
    files = {
        "src/RectanglePacker.cpp"
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
    depfiles_gcc = "build/.objs/msdf-atlas-gen/linux/x86_64/release/src/RectanglePacker.cpp.o:  src/RectanglePacker.cpp include/RectanglePacker.h include/Rectangle.h\
"
}