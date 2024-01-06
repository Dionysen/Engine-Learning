{
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-I.",
            "-Icore",
            "-Iext",
            "-isystem",
            "/usr/include/freetype2",
            "-isystem",
            "/usr/include/libpng16"
        }
    },
    files = {
        "ext/import-font.cpp"
    },
    depfiles_gcc = "import-font.o: ext/import-font.cpp ext/import-font.h ext/../core/Shape.h  ext/../core/Contour.h ext/../core/EdgeHolder.h  ext/../core/edge-segments.h ext/../core/Vector2.hpp ext/../core/base.h  msdfgen-config.h ext/../core/SignedDistance.hpp ext/../core/EdgeColor.h  ext/../core/Scanline.h\
"
}