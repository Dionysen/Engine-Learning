{
    files = {
        "ext/save-png.cpp"
    },
    depfiles_gcc = "build/.objs/msdfgen/linux/x86_64/release/ext/save-png.cpp.o:  ext/save-png.cpp ext/save-png.h ext/../core/BitmapRef.hpp  ext/../core/base.h msdfgen-config.h ext/../core/pixel-conversion.hpp  ext/../core/arithmetics.hpp\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-I.",
            "-Icore",
            "-Iext"
        }
    }
}