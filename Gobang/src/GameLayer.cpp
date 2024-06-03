#include "GameLayer.h"
#include "Application.h"
#include "ChessBoard.h"
#include "ChessEngine.h"
#include "Layer.h"
#include "Log.h"
#include "Renderer2D.h"
#include "TimeStep.h"
#include "glm/gtx/dual_quaternion.hpp"
#include "imgui.h"
#include "spdlog/fmt/bundled/core.h"
#include <stdint.h>


using namespace Dionysen;


GameLayer::GameLayer()
    : Layer("GameLayer")
{
    auto& window = Application::Get().GetWindow();
    window.ResizeWindow(800, 800);
    CreateCamera(window.GetWidth(), window.GetHeight());
    ChessEngine::beforeStart();
}

void GameLayer::OnAttach()
{
}
void GameLayer::OnDetach()
{
}

void GameLayer::OnEvent(Event& e)
{
    EventDispatcher dispatcher(e);
    dispatcher.Dispatch<WindowResizeEvent>(DION_BIND_EVENT_FN(GameLayer::OnWindowsResize));
    dispatcher.Dispatch<MouseButtonPressedEvent>(DION_BIND_EVENT_FN(GameLayer::OnMouseButtonPressed));
}

void GameLayer::OnUpdate(Timestep ts)
{
    // Render
    Dionysen::RenderCommand::SetClearColor({ 0.3f, 0.3f, 0.3f, 1.0f });
    Dionysen::RenderCommand::Clear();

    Dionysen::Renderer2D::BeginScene(*m_Camera);
    m_ChessBoard.OnRender();
    Dionysen::Renderer2D::EndScene();
}

void GameLayer::OnImGuiRender()
{
    ImGui::Begin("Debug");
    m_ChessBoard.OnImGuiRender();
    ImGui::End();
}


bool GameLayer::OnWindowsResize(WindowResizeEvent& e)
{

    if (e.GetWidth() < e.GetHeight())
    {
        auto& window = Application::Get().GetWindow();
        window.ResizeWindow(e.GetHeight(), e.GetHeight());
        CreateCamera(e.GetHeight(), e.GetHeight());
    }
    else
        CreateCamera(e.GetWidth(), e.GetHeight());
    return false;
}
bool GameLayer::OnMouseButtonPressed(MouseButtonPressedEvent& e)
{
    auto& app = Application::Get();

    float x = (2.0f * Input::GetMouseX()) / app.GetWindow().GetWidth() - 1.0f;
    float y = 1.0f - (2.0f * Input::GetMouseY()) / app.GetWindow().GetHeight();
    // Mouse always in z plane, so z === 1.0
    float z = 1.0f;

    glm::vec4 screenPos = glm::vec4(x, y, z, 1.0f);
    glm::vec4 worldPos  = glm::inverse(m_Camera->GetViewProjectionMatrix()) * screenPos;

    // normalize, devide w
    worldPos /= worldPos.w;

    // DION_WARN("x = {0}, y = {1}", Input::GetMouseX(), Input::GetMouseY());
    // DION_WARN("Postion = {0} {1}", worldPos.x, worldPos.y);

    int chessX = static_cast<int>(std::round(worldPos.x));
    int chessY = static_cast<int>(std::round(worldPos.y));

    if (chessX >= -7 && chessX <= 7 && chessY >= -7 && chessY <= 7)
    {
        if (m_ChessBoard.Drop(chessX, chessY, m_Turn))
        {
            if (m_Turn == ChessColor::Black)
                m_Turn = ChessColor::White;
            else
                m_Turn = ChessColor::Black;
        }
    }

    return false;
}

void GameLayer::CreateCamera(uint32_t width, uint32_t height)
{
    float aspectRatio = ((float)width / (float)height);
    float camWidth    = 8.0f;
    float bottom      = -camWidth;
    float top         = camWidth;
    float left        = bottom * aspectRatio;
    float right       = top * aspectRatio;

    m_Camera = CreateScope<OrthographicCamera>(left, right, bottom, top);
}
