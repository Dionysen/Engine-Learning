{
    depfiles_gcc = "json-export.o: src/json-export.cpp include/json-export.h  include/FontGeometry.h ../msdfgen/msdfgen.h ../msdfgen/core/base.h  ../msdfgen/msdfgen-config.h ../msdfgen/core/arithmetics.hpp  ../msdfgen/core/Vector2.hpp ../msdfgen/core/Projection.h  ../msdfgen/core/Scanline.h ../msdfgen/core/Shape.h  ../msdfgen/core/Contour.h ../msdfgen/core/EdgeHolder.h  ../msdfgen/core/edge-segments.h ../msdfgen/core/SignedDistance.hpp  ../msdfgen/core/EdgeColor.h ../msdfgen/core/BitmapRef.hpp  ../msdfgen/core/Bitmap.h ../msdfgen/core/Bitmap.hpp  ../msdfgen/core/bitmap-interpolation.hpp  ../msdfgen/core/pixel-conversion.hpp ../msdfgen/core/edge-coloring.h  ../msdfgen/core/generator-config.h  ../msdfgen/core/msdf-error-correction.h ../msdfgen/core/render-sdf.h  ../msdfgen/core/rasterization.h ../msdfgen/core/sdf-error-estimation.h  ../msdfgen/core/save-bmp.h ../msdfgen/core/save-tiff.h  ../msdfgen/core/shape-description.h ../msdfgen/msdfgen-ext.h  ../msdfgen/ext/resolve-shape-geometry.h ../msdfgen/ext/save-png.h  ../msdfgen/ext/import-svg.h ../msdfgen/ext/import-font.h include/types.h  include/GlyphGeometry.h include/GlyphBox.h include/Charset.h\
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
        "src/json-export.cpp"
    }
}