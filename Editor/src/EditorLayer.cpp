#include "EditorLayer.h"
#include "Application.h"
#include "Framebuffer.h"
#include "RenderCommand.h"
#include "Renderer2D.h"
#include "Texture.h"
#include "glm/fwd.hpp"
#include "glm/gtc/type_ptr.hpp"
#include "imgui.h"


namespace Dionysen
{
    EditorLayer::EditorLayer()
        : Layer("Editor")
        , m_CameraController(1280.0f / 720.0f)
    {
    }

    EditorLayer::~EditorLayer()
    {
    }

    void EditorLayer::OnAttach()
    {
        m_CheckboardTexture = Texture2D::Create("Editor/assets/textures/Checkerboard.png");
        Dionysen::FramebufferSpecification fbSpec;
        fbSpec.Attachments = { FramebufferTextureFormat::RGBA8, FramebufferTextureFormat::RED_INTEGER, FramebufferTextureFormat::Depth };
        fbSpec.Width       = 1280;
        fbSpec.Height      = 720;

        m_Framebuffer = Framebuffer::Create(fbSpec);
    }

    void EditorLayer::OnDetach()
    {
    }

    void EditorLayer::OnUpdate(Timestep ts)
    {
        m_CameraController.OnUpdate(ts);

        Renderer2D::ResetStats();
        {
            m_Framebuffer->Bind();
            RenderCommand::SetClearColor({ 0.1f, 0.1f, 0.1f, 1 });
            RenderCommand::Clear();
        }
        static float rotation = 0.0f;
        rotation += ts * 50.0f;

        Renderer2D::BeginScene(m_CameraController.GetCamera());
        Renderer2D::DrawRotatedQuad({ -1.0f, 0.0f }, { 0.8f, 0.8f }, -45.0f, { 0.8f, 0.2f, 0.3f, 1.0f });
        Renderer2D::DrawQuad({ -1.0f, 0.0f }, { 0.8f, 0.8f }, { 0.8f, 0.2f, 0.3f, 1.0f });
        Renderer2D::DrawQuad({ 0.5f, 0.5f }, { 0.5f, 0.75f }, m_SquareColor);
        Renderer2D::DrawQuad({ 0.0f, 0.0f, -0.1f }, { 20.0f, 20.0f }, m_CheckboardTexture, 10.0f);
        Renderer2D::DrawRotatedQuad({ 0.0f, 0.0f, -0.1f }, { 20.0f, 20.0f }, rotation, m_CheckboardTexture, 10.0f);
        Renderer2D::EndScene();

        Renderer2D::BeginScene(m_CameraController.GetCamera());
        for (float y = 0; y < 5.0f; ++y)
        {
            for (float x = 0; x < 5.0f; ++x)
            {
                glm::vec4 color = { (x + 5.0f) / 10.0f, 0.4f, (y + 5.0f) / 10.0f, 1.0f };
                Renderer2D::DrawQuad({ x, y }, { 0.45f, 0.45f }, color);
            }
        }
        Renderer2D::EndScene();
        m_Framebuffer->Unbind();
    }
    void EditorLayer::OnImGuiRender()
    {
        static bool dockingEnbaled = true;
        if (dockingEnbaled)
        {
            static bool               dockspaceOpen             = true;
            static bool               opt_fullscreen_persistant = true;
            bool                      opt_fullscreen            = opt_fullscreen_persistant;
            static ImGuiDockNodeFlags dockspace_flags           = ImGuiDockNodeFlags_None;

            ImGuiWindowFlags window_flags = ImGuiWindowFlags_MenuBar;
            if (opt_fullscreen)
            {
                ImGuiViewport* viewport = ImGui::GetMainViewport();
                ImGui::SetNextWindowPos(viewport->Pos);
                ImGui::SetNextWindowSize(viewport->Size);
                ImGui::SetNextWindowViewport(viewport->ID);
                ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 0.0f);
                ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.0f);
                window_flags |= ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove;
                window_flags |= ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoNavFocus;
            }

            if (dockspace_flags & ImGuiDockNodeFlags_PassthruCentralNode)
                window_flags |= ImGuiWindowFlags_NoBackground;

            ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0.0f, 0.0f));
            ImGui::Begin("DockSpace Demo", &dockspaceOpen, window_flags);
            ImGui::PopStyleVar();

            if (opt_fullscreen)
                ImGui::PopStyleVar(2);

            ImGuiIO& io = ImGui::GetIO();
            if (io.ConfigFlags & ImGuiConfigFlags_DockingEnable)
            {
                ImGuiID dockspace_id = ImGui::GetID("MyDockSpace");
                ImGui::DockSpace(dockspace_id, ImVec2(0.0f, 0.0f), dockspace_flags);
            }

            if (ImGui::BeginMenuBar())
            {
                if (ImGui::BeginMenu("File"))
                {
                    if (ImGui::MenuItem("Exit"))
                        Application::Get().Close();
                    ImGui::EndMenu();
                }
                ImGui::EndMenuBar();
            }
            ImGui::End();

            ImGui::Begin("Settings");
            auto stats = Renderer2D::GetStats();
            ImGui::Text("Renderer2D Stats:");
            ImGui::Text("Draw Calls: %d", stats.DrawCalls);
            ImGui::Text("Quads: %d", stats.QuadCount);
            ImGui::Text("Vertices: %d", stats.GetTotalVertexCount());
            ImGui::Text("Indices: %d", stats.GetTotalIndexCount());

            ImGui::ColorEdit4("Square Color", glm::value_ptr(m_SquareColor));
            // Frame rate
            ImGui::Text("%.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();

            ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2{ 0, 0 });

            ImGui::Begin("Viewport");
            ImVec2 viewportPanelSize = ImGui::GetContentRegionAvail();
            if (m_ViewportSize != *((glm::vec2*)&viewportPanelSize))
            {
                m_Framebuffer->Resize((uint32_t)viewportPanelSize.x, (uint32_t)viewportPanelSize.y);
                m_ViewportSize = { viewportPanelSize.x, viewportPanelSize.y };
                m_CameraController.OnResize(m_ViewportSize.x, m_ViewportSize.y);
            }
            ImGui::PopStyleVar();

            // uint32_t textureID = m_CheckboardTexture->GetRendererID();
            uint32_t textureID = m_Framebuffer->GetColorAttachmentRendererID();
            ImGui::Image((void*)textureID, ImVec2(m_ViewportSize.x, m_ViewportSize.y), ImVec2{ 0, 1 }, ImVec2{ 1, 0 });
            ImGui::End();
        }
        else
        {
            ImGui::Begin("Settings");
            auto stats = Renderer2D::GetStats();
            ImGui::Text("Renderer2D Stats:");
            ImGui::Text("Draw Calls: %d", stats.DrawCalls);
            ImGui::Text("Quads: %d", stats.QuadCount);
            ImGui::Text("Vertices: %d", stats.GetTotalVertexCount());
            ImGui::Text("Indices: %d", stats.GetTotalIndexCount());

            ImGui::ColorEdit4("Square Color", glm::value_ptr(m_SquareColor));

            uint32_t textureID = m_CheckboardTexture->GetRendererID();
            ImGui::Image((void*)textureID, ImVec2(1280, 720));
            ImGui::End();
        }
    }
    void EditorLayer::OnEvent(Event& e)
    {
        m_CameraController.OnEvent(e);
    }
}  // namespace Dionysen