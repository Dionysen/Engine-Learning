//
// Created by dionysen on 23-12-30.
//

#include "Shader.h"
#include "Base.h"
#include "Log.h"
#include "Renderer.h"
#include "RendererAPI.h"
#include "OpenGLShader.h"

namespace Dionysen
{
    Ref<Dionysen::Shader> Dionysen::Shader::Create(const std::string& filepath)
    {
        switch (Renderer::GetAPI())
        {
        case RendererAPI::API::None:
            DION_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
            return nullptr;
        case RendererAPI::API::OpenGL:
            return CreateRef<OpenGLShader>(filepath);
        }

        DION_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }
    Ref<Dionysen::Shader> Dionysen::Shader::Create(const std::string& vertexSrc, const std::string& fragmentSrc)
    {
        return Ref<Shader>();
    }


    void ShaderLibrary::Add(const std::string& name, const Ref<Shader>& shader)
    {
        DION_CORE_ASSERT(!Exists(name), "Shader already exists!");
        m_Shaders[name] = shader;
    }

    void ShaderLibrary::Add(const Ref<Shader>& shader)
    {
        auto& name = shader->GetName();
        Add(name, shader);
    }

    Ref<Shader> ShaderLibrary::Load(const std::string& filepath)
    {
        auto shader = Shader::Create(filepath);
        Add(shader);
        return shader;
    }

    Ref<Shader> ShaderLibrary::Load(const std::string& name, const std::string& filepath)
    {
        auto shader = Shader::Create(filepath);
        Add(name, shader);
        return shader;
    }

    Ref<Shader> ShaderLibrary::Get(const std::string& name)
    {
        DION_CORE_ASSERT(Exists(name), "Shader not found!");
        return m_Shaders[name];
    }

    bool ShaderLibrary::Exists(const std::string& name) const
    {
        return m_Shaders.find(name) != m_Shaders.end();
    }

}  // namespace Dionysen