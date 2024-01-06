{
    depfiles_gcc = "TightAtlasPacker.o: src/TightAtlasPacker.cpp include/TightAtlasPacker.h  include/GlyphGeometry.h include/GlyphBox.h include/types.h  ../msdfgen/msdfgen-ext.h ../msdfgen/ext/resolve-shape-geometry.h  ../msdfgen/ext/../core/Shape.h ../msdfgen/ext/../core/Contour.h  ../msdfgen/ext/../core/EdgeHolder.h  ../msdfgen/ext/../core/edge-segments.h  ../msdfgen/ext/../core/Vector2.hpp ../msdfgen/ext/../core/base.h  ../msdfgen/msdfgen-config.h ../msdfgen/ext/../core/SignedDistance.hpp  ../msdfgen/ext/../core/EdgeColor.h ../msdfgen/ext/../core/Scanline.h  ../msdfgen/ext/save-png.h ../msdfgen/ext/../core/BitmapRef.hpp  ../msdfgen/ext/import-svg.h ../msdfgen/ext/import-font.h  ../msdfgen/msdfgen.h ../msdfgen/core/arithmetics.hpp  ../msdfgen/core/Projection.h ../msdfgen/core/Bitmap.h  ../msdfgen/core/Bitmap.hpp ../msdfgen/core/bitmap-interpolation.hpp  ../msdfgen/core/pixel-conversion.hpp ../msdfgen/core/edge-coloring.h  ../msdfgen/core/generator-config.h  ../msdfgen/core/msdf-error-correction.h ../msdfgen/core/render-sdf.h  ../msdfgen/core/rasterization.h ../msdfgen/core/sdf-error-estimation.h  ../msdfgen/core/save-bmp.h ../msdfgen/core/save-tiff.h  ../msdfgen/core/shape-description.h include/Rectangle.h  include/rectangle-packing.h include/rectangle-packing.hpp  include/RectanglePacker.h include/size-selectors.h\
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
        "src/TightAtlasPacker.cpp"
    }
}