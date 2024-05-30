#include "GameLayer.h"
#include "Application.h"
#include "ApplicationEvent.h"
#include "Base.h"
#include "Event.h"
#include "Level.h"
#include "OrthographicCamera.h"
#include "RenderCommand.h"
#include "Renderer2D.h"
#include "TimeStep.h"
#include "imgui.h"
#include <cmath>
#include <cstdint>


GameLayer::GameLayer()
    : Layer("GameLayer")
{
    auto& window = Application::Get().GetWindow();
    CreateCamera(window.GetWidth(), window.GetHeight());
}
void GameLayer::OnAttach()
{
    m_Level.Init();
}
void GameLayer::OnImGuiRender()
{
    ImGui::Begin("Settings");
    m_Level.OnImGuiRender();
    ImGui::End();
}

void GameLayer::OnUpdate(Timestep ts)
{
    m_Level.OnUpdate(ts);

    const auto& playerPos = m_Level.GetPlayer().GetPosition();
    m_Camera->SetPosition({ playerPos.x, playerPos.y, 0.0f });

    Dionysen::RenderCommand::SetClearColor({ 0.1f, 0.1f, 0.1f, 1.0f });
    Dionysen::RenderCommand::Clear();

    Dionysen::Renderer2D::BeginScene(*m_Camera);
    m_Level.OnRender();
    Dionysen::Renderer2D::EndScene();
}
void GameLayer::OnDetach()
{
}

void GameLayer::OnEvent(Event& e)
{
    EventDispatcher dispatcher(e);
    dispatcher.Dispatch<WindowResizeEvent>(DION_BIND_EVENT_FN(GameLayer::OnWindowsResize));
}

void GameLayer::CreateCamera(uint32_t width, uint32_t height)
{
    float aspectRatio = ((float)width / (float)height);

    float camWidth = 8.0f;
    float bottom   = -camWidth;
    float top      = camWidth;
    float left     = bottom * aspectRatio;
    float right    = top * aspectRatio;

    m_Camera = CreateScope<OrthographicCamera>(left, right, bottom, top);
}


bool GameLayer::OnWindowsResize(Dionysen::WindowResizeEvent& e)
{
    CreateCamera(e.GetWidth(), e.GetHeight());
    return false;
}
