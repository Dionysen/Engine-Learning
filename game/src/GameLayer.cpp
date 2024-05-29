#include "GameLayer.h"
#include "imgui.h"
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

using namespace Dionysen;

GameLayer::GameLayer()
    : Layer("GameLayer")
{
    // create a window
    auto& window = Application::Get().GetWindow();
    CreateCamera(window.GetWidth(), window.GetHeight());

    // init Random Generator
    Random::Init();
}

void GameLayer::OnAttach()
{
    // ?
    m_Level.Init();

    // Setting font
    ImGuiIO io = ImGui::GetIO();
    m_Font     = io.Fonts->AddFontFromFileTTF("game/assets/OpenSans-Regular.ttf", 120.0f);
}

void GameLayer::OnDetach()
{
}

void GameLayer::OnUpdate(Dionysen::Timestep ts)  // Every frame
{
    // Blink according to the time
    m_Time += ts;
    if ((int)(m_Time * 10.0f) % 8 > 4)
        m_Blink = !m_Blink;

    // Judge is the game over
    if (m_Level.IsGameOver())
        m_State = GameState::GameOver;

    // Set the camera's position according to player's position
    const auto& playerPos = m_Level.GetPlayer().GetPosition();
    m_Camera->SetPosition({ playerPos.x, playerPos.y, 0.0f });


    // If the game state is "play", the level is updating
    switch (m_State)
    {
    case GameState::Play: {
        m_Level.OnUpdate(ts);
        break;
    }
    case GameState::GameOver: {
        break;
    }
    case GameState::MainMenu: {
        break;
    }
    }

    // Render
    Dionysen::RenderCommand::SetClearColor({ 0.0f, 0.0f, 0.0f, 1 });
    Dionysen::RenderCommand::Clear();

    Dionysen::Renderer2D::BeginScene(*m_Camera);
    m_Level.OnRender();
    Dionysen::Renderer2D::EndScene();
}

void GameLayer::OnImGuiRender()
{
    ImGui::Begin("Settings");
    m_Level.OnImGuiRender();
    ImGui::End();

    // UI?

    switch (m_State)
    {
    case GameState::Play: {
        uint32_t    playerScore = m_Level.GetPlayer().GetScore();
        std::string scoreStr    = std::string("Score: ") + std::to_string(playerScore);
        ImGui::GetForegroundDrawList()->AddText(m_Font, 48.0f, ImGui::GetWindowPos(), 0xffffffff, scoreStr.c_str());
        break;
    }
    case GameState::MainMenu: {
        auto pos    = ImGui::GetWindowPos();
        auto width  = Application::Get().GetWindow().GetWidth();
        auto height = Application::Get().GetWindow().GetHeight();
        pos.x += width * 0.5f - 300.0f;
        pos.y += 50.0f;
        if (m_Blink)
            ImGui::GetForegroundDrawList()->AddText(m_Font, 120.0f, pos, 0xffffffff, "Click to Play!");
        break;
    }
    case GameState::GameOver: {
        auto pos    = ImGui::GetWindowPos();
        auto width  = Application::Get().GetWindow().GetWidth();
        auto height = Application::Get().GetWindow().GetHeight();
        pos.x += width * 0.5f - 300.0f;
        pos.y += 50.0f;
        if (m_Blink)
            ImGui::GetForegroundDrawList()->AddText(m_Font, 120.0f, pos, 0xffffffff, "Click to Play!");

        pos.x += 200.0f;
        pos.y += 150.0f;
        uint32_t    playerScore = m_Level.GetPlayer().GetScore();
        std::string scoreStr    = std::string("Score: ") + std::to_string(playerScore);
        ImGui::GetForegroundDrawList()->AddText(m_Font, 48.0f, pos, 0xffffffff, scoreStr.c_str());
        break;
    }
    }
}

void GameLayer::OnEvent(Dionysen::Event& e)
{
    EventDispatcher dispatcher(e);
    dispatcher.Dispatch<WindowResizeEvent>(DION_BIND_EVENT_FN(GameLayer::OnWindowResize));
    dispatcher.Dispatch<MouseButtonPressedEvent>(DION_BIND_EVENT_FN(GameLayer::OnMouseButtonPressed));
}

bool GameLayer::OnMouseButtonPressed(Dionysen::MouseButtonPressedEvent& e)
{
    if (m_State == GameState::GameOver)
        m_Level.Reset();

    m_State = GameState::Play;
    return false;
}

bool GameLayer::OnWindowResize(Dionysen::WindowResizeEvent& e)
{
    CreateCamera(e.GetWidth(), e.GetHeight());
    return false;
}

void GameLayer::CreateCamera(uint32_t width, uint32_t height)
{
    float aspectRatio = (float)width / (float)height;

    float camWidth = 8.0f;
    float bottom   = -camWidth;
    float top      = camWidth;
    float left     = bottom * aspectRatio;
    float right    = top * aspectRatio;
    m_Camera       = CreateScope<OrthographicCamera>(left, right, bottom, top);
}
