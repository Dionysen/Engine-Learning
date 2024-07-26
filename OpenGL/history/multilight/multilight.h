#pragma once
#include "Event.h"
#include "Layer.h"
#include "Shader.h"
#include "TimeStep.h"
#include "VertexArray.h"
#include <Dionysen.h>

namespace Dionysen
{
    class EditorLayer : public Layer
    {
      public:
        EditorLayer();
        virtual ~EditorLayer();

        void OnAttach() override;
        void OnDetach() override;

        void OnUpdate(Timestep ts) override;
        void OnImGuiRender() override;
        void OnEvent(Event& e) override;

      private:
        FPSCamera m_Camera;

        Ref<VertexArray> m_CubeVA;
        Ref<IndexBuffer> m_IndexTriangle;
        Ref<Texture2D>   m_WallTexture;
        Ref<Texture2D>   m_FaceTexture;

        Ref<Shader> m_CubeShader;
        Ref<Shader> m_LightShader;

        Ref<VertexArray> m_LightVA;

        glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
        glm::vec3 m_LightPos    = { 1.2f, 1.0f, 2.0f };
    };
}  // namespace Dionysen
