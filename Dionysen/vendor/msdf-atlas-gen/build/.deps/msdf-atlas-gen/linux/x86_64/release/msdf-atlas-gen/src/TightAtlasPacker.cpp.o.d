{
    files = {
        "msdf-atlas-gen/src/TightAtlasPacker.cpp"
    },
    depfiles_gcc = "TightAtlasPacker.o: msdf-atlas-gen/src/TightAtlasPacker.cpp  msdf-atlas-gen/include/TightAtlasPacker.h  msdf-atlas-gen/include/GlyphGeometry.h msdf-atlas-gen/include/GlyphBox.h  msdf-atlas-gen/include/types.h msdfgen/msdfgen-ext.h  msdfgen/ext/resolve-shape-geometry.h msdfgen/ext/../core/Shape.h  msdfgen/ext/../core/Contour.h msdfgen/ext/../core/EdgeHolder.h  msdfgen/ext/../core/edge-segments.h msdfgen/ext/../core/Vector2.hpp  msdfgen/ext/../core/base.h msdfgen/msdfgen-config.h  msdfgen/ext/../core/SignedDistance.hpp msdfgen/ext/../core/EdgeColor.h  msdfgen/ext/../core/Scanline.h msdfgen/ext/save-png.h  msdfgen/ext/../core/BitmapRef.hpp msdfgen/ext/import-svg.h  msdfgen/ext/import-font.h msdfgen/msdfgen.h msdfgen/core/arithmetics.hpp  msdfgen/core/Projection.h msdfgen/core/Bitmap.h msdfgen/core/Bitmap.hpp  msdfgen/core/bitmap-interpolation.hpp msdfgen/core/pixel-conversion.hpp  msdfgen/core/edge-coloring.h msdfgen/core/generator-config.h  msdfgen/core/msdf-error-correction.h msdfgen/core/render-sdf.h  msdfgen/core/rasterization.h msdfgen/core/sdf-error-estimation.h  msdfgen/core/save-bmp.h msdfgen/core/save-tiff.h  msdfgen/core/shape-description.h msdf-atlas-gen/include/Rectangle.h  msdf-atlas-gen/include/rectangle-packing.h  msdf-atlas-gen/include/rectangle-packing.hpp  msdf-atlas-gen/include/RectanglePacker.h  msdf-atlas-gen/include/size-selectors.h\
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