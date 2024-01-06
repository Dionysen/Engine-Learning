{
    files = {
        "ext/resolve-shape-geometry.cpp"
    },
    depfiles_gcc = "build/.objs/msdfgen/linux/x86_64/release/ext/resolve-shape-geometry.cpp.o:  ext/resolve-shape-geometry.cpp ext/resolve-shape-geometry.h  ext/../core/Shape.h ext/../core/Contour.h ext/../core/EdgeHolder.h  ext/../core/edge-segments.h ext/../core/Vector2.hpp ext/../core/base.h  msdfgen-config.h ext/../core/SignedDistance.hpp ext/../core/EdgeColor.h  ext/../core/Scanline.h\
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