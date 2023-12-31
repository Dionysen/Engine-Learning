
#pragma once

#include "FontGeometry.h"
#include "types.h"
#include <msdfgen-ext.h>
#include <msdfgen.h>

namespace msdf_atlas {

struct ArteryFontExportProperties {
  double fontSize;
  double pxRange;
  ImageType imageType;
  ImageFormat imageFormat;
  YDirection yDirection;
};

/// Encodes the atlas bitmap and its layout into an Artery Atlas Font file
template <typename REAL, typename T, int N>
bool exportArteryFont(const FontGeometry *fonts, int fontCount,
                      const msdfgen::BitmapConstRef<T, N> &atlas,
                      const char *filename,
                      const ArteryFontExportProperties &properties);

} // namespace msdf_atlas
