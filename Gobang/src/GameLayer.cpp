#include "GameLayer.h"
#include "Application.h"
#include "Base.h"
#include "Chess.h"
#include "ChessBoard.h"
#include "ChessEngine.h"
#include "Layer.h"
#include "Log.h"
#include "MouseEvent.h"
#include "Renderer2D.h"
#include "TimeStep.h"
#include "glm/gtx/dual_quaternion.hpp"
#include "imgui.h"
#include "spdlog/fmt/bundled/core.h"
#include <fstream>
#include <stdint.h>
#include "stb_image.h"

using namespace Dionysen;


GameLayer::GameLayer()
    : Layer("GameLayer")
{

    auto& window = Application::Get().GetWindow();
    window.ResizeWindow(800, 800);
    CreateCamera(window.GetWidth(), window.GetHeight());

    // Icon
    int            width, height, channels;
    unsigned char* image = stbi_load("./Gobang/assets/gobang.png", &width, &height, &channels, 4);
    if (image)
    {
        GLFWimage images[1];
        images[0].width  = width;
        images[0].height = height;
        images[0].pixels = image;
        glfwSetWindowIcon((GLFWwindow*)window.GetNativeWindow(), 1, images);
        stbi_image_free(image);
    }
    else
    {
        std::cerr << "Failed to load icon image" << std::endl;
    }


    // ChessEngine
    ChessEngine::beforeStart();
    ChessEngine::setLevel(4);
    ChessEngine::reset(ChessEngine::HUMAN);
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
    dispatcher.Dispatch<MouseMovedEvent>(DION_BIND_EVENT_FN(GameLayer::OnMouseMoved));
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

bool GameLayer::OnMouseMoved(MouseMovedEvent& e)
{
    int chessX = static_cast<int>(std::round(MouseToWorldPosition().x));
    int chessY = static_cast<int>(std::round(MouseToWorldPosition().y));

    if (chessX >= -7 && chessX <= 7 && chessY >= -7 && chessY <= 7)
    {
        m_ChessBoard.m_HoveredChess = Chess(chessX, chessY, m_Turn, 0);
    }
    else
    {
        m_ChessBoard.m_HoveredChess = Chess(chessX, chessY, ChessColor::None, 0);
    }

    return false;
}

bool GameLayer::OnMouseButtonPressed(MouseButtonPressedEvent& e)
{
    int chessX = static_cast<int>(std::round(MouseToWorldPosition().x));
    int chessY = static_cast<int>(std::round(MouseToWorldPosition().y));

    if (chessX >= -7 && chessX <= 7 && chessY >= -7 && chessY <= 7)
    {
        if (m_ChessBoard.Drop(chessX, chessY, m_Turn))
        {
            if (m_Turn == ChessColor::Black)
            {
                // ChessEngine::nextStep(chessX + 7, chessY + 7);
                // m_ChessBoard.Drop(ChessEngine::getLastPosition().x - 7, ChessEngine::getLastPosition().y - 7, ChessColor::White);
                m_Turn = ChessColor::White;
            }
            else
            {
                m_Turn = ChessColor::Black;
            }
        }
    }

    return false;
}

glm::vec4 GameLayer::MouseToWorldPosition()
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

    return worldPos;
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
