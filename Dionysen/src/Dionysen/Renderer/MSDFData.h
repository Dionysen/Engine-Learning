//
// Created by dionysen on 24-1-2.
//

#ifndef ENGINE_LEARNING_MSDFDATA_H
#define ENGINE_LEARNING_MSDFDATA_H

#include <vector>

#undef INFINITE
#include "msdf-atlas-gen.h"
namespace Dionysen
{
    struct MSDFData
    {
        std::vector<msdf_atlas::GlyphGeometry> Glyphs;
        msdf_atlas::FontGeometry               FontGeometry;
    };
}  // namespace Dionysen


#endif  // ENGINE_LEARNING_MSDFDATA_H
