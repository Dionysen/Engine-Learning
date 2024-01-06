{
    files = {
        "ext/import-svg.cpp"
    },
    depfiles_gcc = "build/.objs/msdfgen/linux/x86_64/release/ext/import-svg.cpp.o:  ext/import-svg.cpp ext/import-svg.h ext/../core/Shape.h  ext/../core/Contour.h ext/../core/EdgeHolder.h  ext/../core/edge-segments.h ext/../core/Vector2.hpp ext/../core/base.h  msdfgen-config.h ext/../core/SignedDistance.hpp ext/../core/EdgeColor.h  ext/../core/Scanline.h ext/../core/arithmetics.hpp\
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