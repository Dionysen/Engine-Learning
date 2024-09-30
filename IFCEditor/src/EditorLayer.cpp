#include "EditorLayer.h"
#include "Application.h"
#include "imgui.h"

namespace Dionysen
{
    EditorLayer::EditorLayer()
        : Layer("IFCEditor")

    {
        Application::Get().GetWindow().SetVSync(false);
    }

    EditorLayer::~EditorLayer()
    {
    }

    void EditorLayer::OnAttach()
    {
    }

    void EditorLayer::OnDetach()
    {
    }

    void EditorLayer::OnUpdate(Timestep ts)
    {
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

            setupMenuBar();
            setupToolbar();

            ImGui::End();


            ImGui::Begin("TreeView Example");
            if (ImGui::TreeNode("Root"))
            {
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("Child 1"))
            {
                ImGui::TreePop();
            }
            if (ImGui::TreeNode("Child 2"))
            {
                if (ImGui::TreeNode("GrandChild 1"))
                {
                    ImGui::TreePop();
                }
                if (ImGui::TreeNode("GrandChild 2"))
                {
                    ImGui::TreePop();
                }
                ImGui::TreePop();
            }
            ImGui::End();


            ImGui::Begin("Settings");
            // Frame rate
            ImGui::Text("%.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
            ImGui::End();

            ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2{ 0, 0 });
            ImGui::PopStyleVar();
        }
    }
    void EditorLayer::OnEvent(Event& e)
    {
    }

    void EditorLayer::setupMenuBar()
    {
        if (ImGui::BeginMenuBar())
        {
            if (ImGui::BeginMenu("File"))
            {
                if (ImGui::MenuItem("New")) {}
                if (ImGui::MenuItem("Open")) {}
                if (ImGui::MenuItem("Save")) {}
                if (ImGui::MenuItem("Save As")) {}
                // recent files
                if (ImGui::MenuItem("Recent Files")) {}
                if (ImGui::MenuItem("Exit"))
                    Application::Get().Close();
                ImGui::EndMenu();
            }
            if (ImGui::BeginMenu("Edit"))
            {
                if (ImGui::MenuItem("Exit"))
                    Application::Get().Close();
                ImGui::EndMenu();
            }
            if (ImGui::BeginMenu("Navigate"))
            {
                if (ImGui::MenuItem("Exit"))
                    Application::Get().Close();
                ImGui::EndMenu();
            }
            if (ImGui::BeginMenu("Tools"))
            {
                if (ImGui::MenuItem("Exit"))
                    Application::Get().Close();
                ImGui::EndMenu();
            }
            if (ImGui::BeginMenu("Help"))
            {
                if (ImGui::MenuItem("Exit"))
                    Application::Get().Close();
                ImGui::EndMenu();
            }

            ImGui::EndMenuBar();
        }
    }

    void EditorLayer::setupToolbar()
    {
        if (ImGui::Begin("Toolbar"))
        {
            if (ImGui::Button("New"))
            {
                // 新建文件的逻辑
            }
            ImGui::SameLine();
            if (ImGui::Button("Open"))
            {
                // 打开文件的逻辑
            }
            ImGui::SameLine();
            if (ImGui::Button("Save"))
            {
                // 保存文件的逻辑
            }
            ImGui::SameLine();
            if (ImGui::Button("Save As"))
            {
                // 另存为文件的逻辑
            }
            ImGui::End();
        }
    }
}  // namespace Dionysen