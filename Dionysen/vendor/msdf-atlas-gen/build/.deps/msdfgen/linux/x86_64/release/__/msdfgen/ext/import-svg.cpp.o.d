{
    files = {
        "../msdfgen/ext/import-svg.cpp"
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
    depfiles_gcc = "build/.objs/msdfgen/linux/x86_64/release/__/msdfgen/ext/import-svg.cpp.o:  ../msdfgen/ext/import-svg.cpp ../msdfgen/ext/import-svg.h  ../msdfgen/ext/../core/Shape.h ../msdfgen/ext/../core/Contour.h  ../msdfgen/ext/../core/EdgeHolder.h  ../msdfgen/ext/../core/edge-segments.h  ../msdfgen/ext/../core/Vector2.hpp ../msdfgen/ext/../core/base.h  ../msdfgen/msdfgen-config.h ../msdfgen/ext/../core/SignedDistance.hpp  ../msdfgen/ext/../core/EdgeColor.h ../msdfgen/ext/../core/Scanline.h  ../msdfgen/ext/../core/arithmetics.hpp\
"
}