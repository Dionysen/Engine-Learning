#pragma once
#include <Dionysen.h>
#include <Layer.h>
namespace Dionysen
{
    class OpenGLLayer : public Layer
    {
      public:
        OpenGLLayer();
        ~OpenGLLayer();

        virtual void OnAttach() override;
        virtual void OnDetach() override;
        virtual void OnUpdate(Dionysen::Timestep ts) override;
        virtual void OnImGuiRender() override;
        virtual void OnEvent(Dionysen::Event& event) override;

      private:
        // Dionysen::Ref<Dionysen::Shader>      m_Shader;
        // Dionysen::Ref<Dionysen::VertexArray> m_VertexArray;
    };
}  // namespace Dionysen
