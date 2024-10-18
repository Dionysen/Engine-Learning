//
// Created by dionysen on 24-1-2.
//

#ifndef ENGINE_LEARNING_TEXTURE_H
#define ENGINE_LEARNING_TEXTURE_H

#pragma once

#include "Base.h"
#include <string>
#include "FPSCamera.h"

namespace Dionysen
{

    enum class ImageFormat
    {
        None = 0,
        R8,
        RGB8,
        RGBA8,
        RGBA32F
    };

    struct TextureSpecification
    {
        uint32_t    Width        = 1;
        uint32_t    Height       = 1;
        ImageFormat Format       = ImageFormat::RGBA8;
        bool        GenerateMips = true;
    };


    enum class TextureType
    {
        DIFFUSE = 0,
        SPECULAR,
        NORMAL,
        HEIGHT
    };

    class DION_API Texture
    {
      public:
        virtual ~Texture() = default;

        virtual const TextureSpecification& GetSpecification() const = 0;

        virtual uint32_t GetWidth() const      = 0;
        virtual uint32_t GetHeight() const     = 0;
        virtual uint32_t GetRendererID() const = 0;

        virtual const std::string& GetPath() const = 0;

        virtual void SetData(void* data, uint32_t size) = 0;

        virtual void Bind(uint32_t slot = 0) const = 0;

        virtual void        SetType(TextureType type) = 0;
        virtual TextureType GetType() const           = 0;

        virtual bool IsLoaded() const = 0;

        virtual bool operator==(const Texture& other) const = 0;
    };

    class DION_API Texture2D : public Texture
    {
      public:
        static Ref<Texture2D> Create(const TextureSpecification& specification);
        static Ref<Texture2D> Create(const std::string& path);
    };

    class DION_API TextureCubemap
    {
      public:
        virtual void Bind() = 0;

        static Ref<TextureCubemap> Create(const std::vector<std::string>& path);
    };

    class DION_API Skybox
    {
      public:
        /*
        @brief
        For creating cubetexture easily, from GL_TEXTURE_CUBE_MAP_POSITIVE_X to GL_TEXTURE_CUBE_MAP_POSITIVE_X + 5, the order is "Right, Left,
        Top, Bottom, Front, Back".
        */
        static Ref<Skybox> Create(const std::vector<std::string>& path);

        virtual Ref<TextureCubemap> GetTexture() = 0;

        virtual void Submit(FPSCamera& camera) = 0;
    };
}  // namespace Dionysen

#endif  // ENGINE_LEARNING_TEXTURE_H
