#pragma once
#include "Event.h"
#include "Framebuffer.h"
#include "Layer.h"
#include "OrthographicCameraController.h"
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
        OrthographicCameraController m_CameraController;

        FPSCamera m_Camera;

        // Temp

        Ref<VertexArray> m_SquareVA;
        Ref<Shader>      m_FlatColorShader;
        Ref<Framebuffer> m_Framebuffer;

        Ref<Texture2D> m_CheckboardTexture;

        glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };

        glm::vec2 m_ViewportSize = { 0.0f, 0.0f };
    };
}  // namespace Dionysen
