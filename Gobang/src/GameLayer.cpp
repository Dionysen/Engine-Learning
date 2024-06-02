#include "GameLayer.h"
#include "Layer.h"
#include "TimeStep.h"
#include <stdint.h>

using namespace Dionysen;


GameLayer::GameLayer()
    : Layer("GameLayer")
{
    auto& window = Application::Get().GetWindow();
    CreateCamera(window.GetWidth(), window.GetHeight());
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
    Dionysen::RenderCommand::SetClearColor({ 0.1f, 0.1f, 0.1f, 1.0f });
    Dionysen::RenderCommand::Clear();

    Dionysen::Renderer2D::BeginScene(*m_Camera);
    m_ChessBoard.OnRender();
    Dionysen::Renderer2D::EndScene();
}

void GameLayer::OnImGuiRender()
{
}


bool GameLayer::OnWindowsResize(WindowResizeEvent& e)
{
    CreateCamera(e.GetWidth(), e.GetHeight());
    // if (e.GetWidth() < e.GetHeight())
    m_ChessBoard.DrawChessBoard(e.GetHeight(), { 0.0f, 0.0f, 0.0f });
    // else if (e.GetWidth() >= e.GetHeight())
    // m_ChessBoard.DrawChessBoard(e.GetHeight(), { 0.0f, 0.0f, 0.0f });
    return false;
}
bool GameLayer::OnMouseButtonPressed(MouseButtonPressedEvent& e)
{
    return false;
}

void GameLayer::CreateCamera(uint32_t width, uint32_t height)
{
    float aspectRatio = ((float)width / (float)height);
    float camWidth    = 25.0f;
    float bottom      = -camWidth;
    float top         = camWidth;
    float left        = bottom * aspectRatio;
    float right       = top * aspectRatio;

    m_Camera = CreateScope<OrthographicCamera>(left, right, bottom, top);
}