{
    files = {
        "msdf-atlas-gen/src/json-export.cpp"
    },
    depfiles_gcc = "json-export.o: msdf-atlas-gen/src/json-export.cpp  msdf-atlas-gen/include/json-export.h  msdf-atlas-gen/include/FontGeometry.h msdfgen/msdfgen.h  msdfgen/core/base.h msdfgen/msdfgen-config.h  msdfgen/core/arithmetics.hpp msdfgen/core/Vector2.hpp  msdfgen/core/Projection.h msdfgen/core/Scanline.h msdfgen/core/Shape.h  msdfgen/core/Contour.h msdfgen/core/EdgeHolder.h  msdfgen/core/edge-segments.h msdfgen/core/SignedDistance.hpp  msdfgen/core/EdgeColor.h msdfgen/core/BitmapRef.hpp  msdfgen/core/Bitmap.h msdfgen/core/Bitmap.hpp  msdfgen/core/bitmap-interpolation.hpp msdfgen/core/pixel-conversion.hpp  msdfgen/core/edge-coloring.h msdfgen/core/generator-config.h  msdfgen/core/msdf-error-correction.h msdfgen/core/render-sdf.h  msdfgen/core/rasterization.h msdfgen/core/sdf-error-estimation.h  msdfgen/core/save-bmp.h msdfgen/core/save-tiff.h  msdfgen/core/shape-description.h msdfgen/msdfgen-ext.h  msdfgen/ext/resolve-shape-geometry.h msdfgen/ext/save-png.h  msdfgen/ext/import-svg.h msdfgen/ext/import-font.h  msdf-atlas-gen/include/types.h msdf-atlas-gen/include/GlyphGeometry.h  msdf-atlas-gen/include/GlyphBox.h msdf-atlas-gen/include/Charset.h\
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