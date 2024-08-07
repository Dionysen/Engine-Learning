#pragma once
#include "Base.h"
#include "Event.h"
#include "Framebuffer.h"
#include "Layer.h"
#include "Model.h"
#include "Shader.h"
#include "Texture.h"
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

        Ref<Model> m_Model;

        bool  m_isLine          = false;
        bool  m_isNormalMapping = true;
        bool  m_isVSync         = true;
        float m_LightRotate     = 0.0f;
        int   m_Effect          = 0;

        const char* m_EffectArray[6] = { "None", "Inversion", "Grayscale", "Sharpen", "Blur", "Edge-detection" };

        Ref<Texture2D> m_FloorTex;
        Ref<Texture2D> m_GrassTex;
        Ref<Texture2D> m_LightTex;
        Ref<Texture2D> m_WindowTex;

        Ref<VertexArray> m_FramebufferVAO;
        Ref<Framebuffer> m_FrameBuffer;
        Ref<Shader>      m_ScreenShader;

        Ref<Skybox> m_Skybox;

        Ref<Shader> m_ModelShader;
        Ref<Shader> m_LightShader;
        Ref<Shader> m_SingleColorShader;

        glm::vec3 m_LightPos = { 1.0f, 5.0f, 5.0f };
    };
}  // namespace Dionysen
