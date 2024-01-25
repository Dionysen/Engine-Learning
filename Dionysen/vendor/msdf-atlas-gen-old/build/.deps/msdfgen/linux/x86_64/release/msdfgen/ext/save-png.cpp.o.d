{
    files = {
        "msdfgen/ext/save-png.cpp"
    },
    depfiles_gcc = "save-png.o: msdfgen/ext/save-png.cpp msdfgen/ext/save-png.h  msdfgen/ext/../core/BitmapRef.hpp msdfgen/ext/../core/base.h  msdfgen/msdfgen-config.h msdfgen/ext/../core/pixel-conversion.hpp  msdfgen/ext/../core/arithmetics.hpp\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-Imsdfgen",
            "-Imsdfgen/core",
            "-Imsdfgen/ext",
            "-isystem",
            "/usr/include/freetype2",
            "-isystem",
            "/usr/include/libpng16"
        }
    }
}