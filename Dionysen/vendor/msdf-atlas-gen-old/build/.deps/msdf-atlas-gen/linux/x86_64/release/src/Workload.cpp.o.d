{
    depfiles_gcc = "Workload.o: src/Workload.cpp include/Workload.h\
",
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
    files = {
        "src/Workload.cpp"
    }
}