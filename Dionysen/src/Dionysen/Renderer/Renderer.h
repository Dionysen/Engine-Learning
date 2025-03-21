//
// Created by dionysen on 23-12-31.
//

#ifndef ENGINE_LEARNING_RENDERER_H
#define ENGINE_LEARNING_RENDERER_H

#include "dspch.h"
#include "Shader.h"
#include "VertexArray.h"
#include "OrthographicCamera.h"
#include "RendererAPI.h"
#include "FPSCamera.h"

namespace Dionysen
{
    class DION_API Renderer
    {
      public:
        static void Init();
        static void Shutdown();

        static void OnWindowResize(uint32_t width, uint32_t height);

        static void BeginScene(OrthographicCamera& camera);
        static void BeginScene(FPSCamera& camera);
        static void EndScene();

        static void Submit(const Ref<Shader>& shader, const Ref<VertexArray>& vertexArray, const glm::mat4& transform = glm::mat4(1.0f));

        static RendererAPI::API GetAPI()
        {
            return RendererAPI::GetAPI();
        }

      private:
        struct SceneData
        {
            glm::mat4 ViewProjectionMatrix;
        };

        static Scope<SceneData> s_SceneData;
    };

}  // namespace Dionysen



#endif  // ENGINE_LEARNING_RENDERER_H
