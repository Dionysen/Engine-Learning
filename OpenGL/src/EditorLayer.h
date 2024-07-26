#pragma once
#include "Base.h"
#include "Event.h"
#include "Layer.h"
#include "Model.h"
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

        Ref<Model> m_Model;

        bool m_isLine          = false;
        bool m_isNormalMapping = true;
        bool m_isVSync         = true;

        Ref<VertexArray> m_CubeVA;
        Ref<IndexBuffer> m_IndexTriangle;
        Ref<Texture2D>   m_WallTexture;
        Ref<Texture2D>   m_FaceTexture;

        Ref<Shader> m_CubeShader;
        Ref<Shader> m_LightShader;
        Ref<Shader> m_SingleColorShader;

        Ref<VertexArray> m_LightVA;

        glm::vec4 m_SquareColor = { 0.2f, 0.3f, 0.8f, 1.0f };
        glm::vec3 m_LightPos    = { 1.2f, 100.0f, 250.0f };
    };
}  // namespace Dionysen
