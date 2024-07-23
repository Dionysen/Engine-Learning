
#ifndef ENGINE_LEARNING_MODEL_H
#define ENGINE_LEARNING_MODEL_H

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

        virtual void loadModel(std::string const path) = 0;
        virtual void Draw(const Ref<Shader>& shader)   = 0;

        static Ref<Model> Create(std::string filePath);
    };

}  // namespace Dionysen

#endif