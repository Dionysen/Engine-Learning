{
    files = {
        "msdf-atlas-gen/src/image-encode.cpp"
    },
    depfiles_gcc = "image-encode.o: msdf-atlas-gen/src/image-encode.cpp  msdf-atlas-gen/include/image-encode.h msdfgen/msdfgen.h  msdfgen/core/base.h msdfgen/msdfgen-config.h  msdfgen/core/arithmetics.hpp msdfgen/core/Vector2.hpp  msdfgen/core/Projection.h msdfgen/core/Scanline.h msdfgen/core/Shape.h  msdfgen/core/Contour.h msdfgen/core/EdgeHolder.h  msdfgen/core/edge-segments.h msdfgen/core/SignedDistance.hpp  msdfgen/core/EdgeColor.h msdfgen/core/BitmapRef.hpp  msdfgen/core/Bitmap.h msdfgen/core/Bitmap.hpp  msdfgen/core/bitmap-interpolation.hpp msdfgen/core/pixel-conversion.hpp  msdfgen/core/edge-coloring.h msdfgen/core/generator-config.h  msdfgen/core/msdf-error-correction.h msdfgen/core/render-sdf.h  msdfgen/core/rasterization.h msdfgen/core/sdf-error-estimation.h  msdfgen/core/save-bmp.h msdfgen/core/save-tiff.h  msdfgen/core/shape-description.h msdf-atlas-gen/include/types.h\
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