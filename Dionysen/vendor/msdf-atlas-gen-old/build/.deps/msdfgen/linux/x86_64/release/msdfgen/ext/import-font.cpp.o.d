{
    files = {
        "msdfgen/ext/import-font.cpp"
    },
    depfiles_gcc = "import-font.o: msdfgen/ext/import-font.cpp msdfgen/ext/import-font.h  msdfgen/ext/../core/Shape.h msdfgen/ext/../core/Contour.h  msdfgen/ext/../core/EdgeHolder.h msdfgen/ext/../core/edge-segments.h  msdfgen/ext/../core/Vector2.hpp msdfgen/ext/../core/base.h  msdfgen/msdfgen-config.h msdfgen/ext/../core/SignedDistance.hpp  msdfgen/ext/../core/EdgeColor.h msdfgen/ext/../core/Scanline.h\
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