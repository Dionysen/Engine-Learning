{
    files = {
        "msdf-atlas-gen/src/Workload.cpp"
    },
    depfiles_gcc = "Workload.o: msdf-atlas-gen/src/Workload.cpp  msdf-atlas-gen/include/Workload.h\
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