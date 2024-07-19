#pragma once
#include "Shader.h"
#include "dspch.h"
#include <string>

namespace Dionysen
{
    class Model
    {
      public:
        virtual ~Model() = default;

        virtual void loadModel(std::string const& path);
        virtual void Draw(Shader& shader) = 0;

        static Ref<Model> Create(std::string& filePath);
    };

}  // namespace Dionysen