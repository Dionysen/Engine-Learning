#include "OpenGLTextureCubemap.h"
#include "GL/glew.h"
#include "stb_image.h"
#include <string>
#define STB_IMAGE_IMPLEMENTATION

namespace Dionysen
{
    OpenGLTextureCubemap::OpenGLTextureCubemap(const std::vector<std::string>& path)
    {

        glGenTextures(1, &m_RendererID);
        glBindTexture(GL_TEXTURE_CUBE_MAP, m_RendererID);

        int width, height, nrChannels;
        stbi_set_flip_vertically_on_load(0);

        for (unsigned int i = 0; i < path.size(); i++)
        {
            unsigned char* data = stbi_load(path[i].c_str(), &width, &height, &nrChannels, 0);
            if (data)
            {
                glTexImage2D(GL_TEXTURE_CUBE_MAP_POSITIVE_X + i, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
                stbi_image_free(data);
            }
            else
            {
                std::cout << "Cubemap texture failed to load at path: " << path[i] << std::endl;
                stbi_image_free(data);
            }
        }
        glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);
    }
    OpenGLTextureCubemap::~OpenGLTextureCubemap()
    {
    }

    void OpenGLTextureCubemap::Bind()
    {
        glBindTexture(GL_TEXTURE_CUBE_MAP, m_RendererID);
    }

    // OpenGLSkybox
    OpenGLSkybox::OpenGLSkybox(const std::vector<std::string>& path)
    {
        m_CubemapVA                           = VertexArray::Create();
        Ref<VertexBuffer> cubemapVertexBuffer = VertexBuffer::Create(m_SkyboxVertices, sizeof(m_SkyboxVertices));
        BufferLayout      cubemapLayout       = { { ShaderDataType::Float3, "a_Position" } };
        cubemapVertexBuffer->SetLayout(cubemapLayout);
        m_CubemapVA->AddVertexBuffer(cubemapVertexBuffer);

        m_TextureCubemap = TextureCubemap::Create(path);

        std::string vertexShaderStr = R"(
            #version 330 core
            layout (location = 0) in vec3 aPosition;

            out vec3 TexCoords;

            uniform mat4 u_ViewProjection;

            void main()
            {
                TexCoords = aPosition;
                vec4 pos = u_ViewProjection * vec4(aPosition, 1.0);
                gl_Position = pos.xyww; 
            }
        )";

        std::string fragmentShaderStr = R"(
            #version 330 core
            out vec4 FragColor;

            in vec3 TexCoords;

            uniform samplerCube skybox;

            void main()
            {    
                FragColor = texture(skybox, TexCoords);
            }
        )";

        m_CubemapShader = Shader::Create("cubmapShader", vertexShaderStr, fragmentShaderStr);
        m_CubemapShader->Bind();
        m_CubemapShader->SetInt("skybox", 0);

        m_TextureCubemap->Bind();
    }
    OpenGLSkybox::~OpenGLSkybox()
    {
    }
    void OpenGLSkybox::Submit(FPSCamera& camera)
    {
        glDepthFunc(GL_LEQUAL);  // change depth function so depth test passes when values are equal to depth buffer's content
        m_CubemapShader->Bind();
        m_CubemapShader->SetMat4("u_ViewProjection", camera.GetProjectionMatrix() * glm::mat4(glm::mat3(camera.GetViewMatrix())));
        // skybox
        m_TextureCubemap->Bind();
        m_CubemapVA->Bind();
        glDrawArrays(GL_TRIANGLES, 0, 36);
        glBindVertexArray(0);
        glDepthFunc(GL_LESS);  // set depth function back to default
    }
}  // namespace Dionysen