{
    files = {
        "../msdfgen/ext/save-png.cpp"
    },
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-I../msdfgen",
            "-I../msdfgen/core",
            "-I../msdfgen/ext",
            "-isystem",
            "/usr/include/freetype2",
            "-isystem",
            "/usr/include/libpng16"
        }
    },
    depfiles_gcc = "build/.objs/msdfgen/linux/x86_64/release/__/msdfgen/ext/save-png.cpp.o:  ../msdfgen/ext/save-png.cpp ../msdfgen/ext/save-png.h  ../msdfgen/ext/../core/BitmapRef.hpp ../msdfgen/ext/../core/base.h  ../msdfgen/msdfgen-config.h ../msdfgen/ext/../core/pixel-conversion.hpp  ../msdfgen/ext/../core/arithmetics.hpp\
"
}