//
// Created by dionysen on 24-1-2.
//

#ifndef ENGINE_LEARNING_FONT_H
#define ENGINE_LEARNING_FONT_H

#pragma once
#include <filesystem>
#include "Base.h"
#include "Texture.h"

namespace Dionysen
{
    struct MSDFData;
    class DION_API Font
    {
      public:
        Font(const std::filesystem::path& font);
        ~Font();

        const MSDFData* GetMSDFData() const
        {
            return m_Data;
        }
        Ref<Texture2D> GetAtlasTexture() const
        {
            return m_AtlasTexture;
        }

        static Ref<Font> GetDefault();

      private:
        MSDFData*      m_Data;
        Ref<Texture2D> m_AtlasTexture;
    };

}  // namespace Dionysen



#endif  // ENGINE_LEARNING_FONT_H
