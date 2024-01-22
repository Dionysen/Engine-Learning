{
    depfiles_gcc = "build/.objs/msdfgen/linux/x86_64/release/main.cpp.o: main.cpp\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-I.",
            "-Icore",
            "-Iext"
        }
    },
    files = {
        "main.cpp"
    }
}