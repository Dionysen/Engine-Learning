#include "ImGuiLayer.h"
#include "dspch.h"

#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"

#ifdef GLFW_WINDOW
#include "GLFW/glfw3.h"
#include "imgui_impl_glfw.h"
#else
#ifdef DION_PLATFORM_WINDOWS
#include "imgui_impl_win32.h"
#endif
#endif

#include "imgui_impl_opengl3.h"
#include "imgui_impl_opengl3_loader.h"
#include "Application.h"
#include <imgui_internal.h>
#include "ImGuizmo.h"

namespace Dionysen
{

    ImGuiLayer::ImGuiLayer()
        : Layer("ImGuiLayer")
    {
    }

    ImGuiLayer::~ImGuiLayer() = default;

    void ImGuiLayer::OnAttach()
    {
        const char* glsl_version = "#version 410";
        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGuiIO& io = ImGui::GetIO();

        io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
        // io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;      // Enable Docking

        // io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;

        ImGui::StyleColorsDark();

        float fontSize = 18.0f;  // *2.0f;
        io.Fonts->AddFontFromFileTTF("Dionysen/assets/fonts/open-sans/OpenSans-Regular.ttf", fontSize);
        io.FontDefault = io.Fonts->AddFontFromFileTTF("Dionysen/assets/fonts/open-sans/OpenSans-Regular.ttf", fontSize);

        ImGuiStyle& style = ImGui::GetStyle();
        // if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
        // {
        //     style.WindowRounding              = 0.0f;
        //     style.Colors[ImGuiCol_WindowBg].w = 1.0f;
        // }

        SetDarkThemeColors();

#ifdef GLFW_WINDOW
        Application& app    = Application::Get();
        auto*        window = static_cast<GLFWwindow*>(app.GetWindow().GetNativeWindow());
        ImGui_ImplGlfw_InitForOpenGL(window, true);
#else
#ifdef DION_PLATFORM_WINDOWS
        Application& app    = Application::Get();
        auto*        window = static_cast<HWND>(app.GetWindow().GetNativeWindow());
        ImGui_ImplWin32_Init(window);
#endif
#endif
        ImGui_ImplOpenGL3_Init(glsl_version);
    }

    void ImGuiLayer::OnDetach()
    {
        ImGui_ImplOpenGL3_Shutdown();
#ifdef GLFW_WINDOW
        ImGui_ImplGlfw_Shutdown();
#else
#ifdef DION_PLATFORM_WINDOWS
        ImGui_ImplWin32_Shutdown();
#endif
#endif
        ImGui::DestroyContext();
    }

    void ImGuiLayer::Begin()
    {
        ImGui_ImplOpenGL3_NewFrame();

#ifdef GLFW_WINDOW
        ImGui_ImplGlfw_NewFrame();
#else
#ifdef DION_PLATFORM_WINDOWS
        ImGui_ImplWin32_NewFrame();
#endif
#endif
        ImGui::NewFrame();
        ImGuizmo::BeginFrame();
    }

    void ImGuiLayer::End()
    {
        ImGuiIO&     io  = ImGui::GetIO();
        Application& app = Application::Get();
        io.DisplaySize   = ImVec2((float)app.GetWindow().GetWidth(), (float)app.GetWindow().GetHeight());

        //         // Rendering
        //         ImGui::Render();
        //         ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        //         if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
        //         {
        // #ifdef GLFW_WINDOW
        //             GLFWwindow* backup_current_context = glfwGetCurrentContext();
        //             ImGui::UpdatePlatformWindows();
        //             ImGui::RenderPlatformWindowsDefault();
        //             glfwMakeContextCurrent(backup_current_context);
        // #else
        // #ifdef DION_PLATFORM_WINDOWS
        //             HWND backup_current_context = GetActiveWindow();
        //             ImGui::UpdatePlatformWindows();
        //             ImGui::RenderPlatformWindowsDefault();
        //             SetActiveWindow(backup_current_context);
        // #endif
        // #endif
        //         }
    }

    void ImGuiLayer::OnEvent(Event& event)
    {
        if (m_BlockEvents)
        {
            ImGuiIO& io = ImGui::GetIO();
            event.m_Handled |= event.IsInCategory(EventCategoryMouse) & io.WantCaptureMouse;
            event.m_Handled |= event.IsInCategory(EventCategoryKeyboard) & io.WantCaptureKeyboard;
        }
    }
    void ImGuiLayer::SetDarkThemeColors()
    {
        auto& colors              = ImGui::GetStyle().Colors;
        colors[ImGuiCol_WindowBg] = ImVec4{ 0.1f, 0.105f, 0.11f, 1.0f };

        // Headers
        colors[ImGuiCol_Header]        = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };
        colors[ImGuiCol_HeaderHovered] = ImVec4{ 0.3f, 0.305f, 0.31f, 1.0f };
        colors[ImGuiCol_HeaderActive]  = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };

        // Buttons
        colors[ImGuiCol_Button]        = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };
        colors[ImGuiCol_ButtonHovered] = ImVec4{ 0.3f, 0.305f, 0.31f, 1.0f };
        colors[ImGuiCol_ButtonActive]  = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };

        // Frame BG
        colors[ImGuiCol_FrameBg]        = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };
        colors[ImGuiCol_FrameBgHovered] = ImVec4{ 0.3f, 0.305f, 0.31f, 1.0f };
        colors[ImGuiCol_FrameBgActive]  = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };

        // Tabs
        colors[ImGuiCol_Tab]                = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
        colors[ImGuiCol_TabHovered]         = ImVec4{ 0.38f, 0.3805f, 0.381f, 1.0f };
        colors[ImGuiCol_TabActive]          = ImVec4{ 0.28f, 0.2805f, 0.281f, 1.0f };
        colors[ImGuiCol_TabUnfocused]       = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
        colors[ImGuiCol_TabUnfocusedActive] = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };

        // Title
        colors[ImGuiCol_TitleBg]          = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
        colors[ImGuiCol_TitleBgActive]    = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };
        colors[ImGuiCol_TitleBgCollapsed] = ImVec4{ 0.15f, 0.1505f, 0.151f, 1.0f };

        // 菜单栏样式修改
        colors[ImGuiCol_MenuBarBg] = ImVec4{ 0.2f, 0.205f, 0.21f, 1.0f };
    }

    uint32_t ImGuiLayer::GetActiveWidgetID() const
    {
        return GImGui->ActiveId;
    }

}  // namespace Dionysen