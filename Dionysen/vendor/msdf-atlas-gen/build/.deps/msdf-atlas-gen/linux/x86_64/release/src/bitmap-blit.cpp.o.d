{
    depfiles_gcc = "bitmap-blit.o: src/bitmap-blit.cpp include/bitmap-blit.h  ../msdfgen/msdfgen.h ../msdfgen/core/base.h ../msdfgen/msdfgen-config.h  ../msdfgen/core/arithmetics.hpp ../msdfgen/core/Vector2.hpp  ../msdfgen/core/Projection.h ../msdfgen/core/Scanline.h  ../msdfgen/core/Shape.h ../msdfgen/core/Contour.h  ../msdfgen/core/EdgeHolder.h ../msdfgen/core/edge-segments.h  ../msdfgen/core/SignedDistance.hpp ../msdfgen/core/EdgeColor.h  ../msdfgen/core/BitmapRef.hpp ../msdfgen/core/Bitmap.h  ../msdfgen/core/Bitmap.hpp ../msdfgen/core/bitmap-interpolation.hpp  ../msdfgen/core/pixel-conversion.hpp ../msdfgen/core/edge-coloring.h  ../msdfgen/core/generator-config.h  ../msdfgen/core/msdf-error-correction.h ../msdfgen/core/render-sdf.h  ../msdfgen/core/rasterization.h ../msdfgen/core/sdf-error-estimation.h  ../msdfgen/core/save-bmp.h ../msdfgen/core/save-tiff.h  ../msdfgen/core/shape-description.h include/types.h\
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
        "src/bitmap-blit.cpp"
    }
}