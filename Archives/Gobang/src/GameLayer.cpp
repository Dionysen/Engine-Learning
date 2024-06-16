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
#include "glm/gtc/type_ptr.hpp"
#include "imgui.h"
#include "stb_image.h"
#include <thread>

using namespace Dionysen;

GameLayer::GameLayer()
    : Layer("GameLayer")
{
    auto& window = Application::Get().GetWindow();
    window.ResizeWindow(800 * 1.5f, 800);
    CreateCamera(window.GetHeight() * 1.5f, window.GetHeight());
    CalculateCameraPosition();


    // Icon
    int            width, height, channels;
    unsigned char* image = stbi_load("./Archives/Gobang/assets/gobang.png", &width, &height, &channels, 4);
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
    ChessEngine::setLevel(1);
    // ChessEngine::reset(ChessEngine::HUMAN);
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

    Renderer2D::ResetStats();
    Dionysen::Renderer2D::BeginScene(*m_Camera);

    switch (m_Status)
    {
    case Status::MainMenu:
        break;
    case Status::Gaming:
        m_ChessBoard.OnRender();
        break;
    case Status::GameOver:
        m_ChessBoard.OnRender();
        break;
    }

    Dionysen::Renderer2D::EndScene();
}

void GameLayer::OnImGuiRender()
{
    // ========== Window Setting ==============
    auto& window = Application::Get().GetWindow();
    ImGui::Begin(" ", NULL, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);
    // Setting Window's pos and size
    ImGui::SetWindowSize({ ((float)window.GetWidth() - (float)window.GetHeight()) - (float)window.GetHeight() * 0.5f / 16.0f,
                           (float)window.GetHeight() * 15.0f / 16.0f });
    ImGui::SetWindowPos({ (float)window.GetHeight(), (float)window.GetHeight() * 0.5f / 16.0f });

    // ============= Game ==================
    ImGui::SeparatorText("Gobang Menu");

    switch (m_Status)
    {
    case Status::MainMenu:
        if (ImGui::Button("New Game", { 120.0f, 50.0f }))
        {
            m_Status = Status::Gaming;
            m_ChessBoard.Init();
            InitGameEngine();
        }

        ImGui::Separator();
        ImGui::Text("Setting");
        ImGui::SetNextItemWidth(120.0f);
        if (ImGui::Combo("Diffculty", &m_Diffculty, m_Diffculties, IM_ARRAYSIZE(m_Diffculties)))
        {
            ChessEngine::setLevel(m_Diffculty + 1);
        }

        ImGui::SetNextItemWidth(120.0f);
        ImGui::Combo("First", &m_CurrentFirst, m_First, IM_ARRAYSIZE(m_First));

        break;
    case Status::Gaming:
        if (ImGui::Button("Replay", { 120.0f, 50.0f }))
        {
            if (m_ComputerDroped)
            {
                m_ChessBoard.Init();
                m_Turn = ChessColor::Black;
                InitGameEngine();
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("Withdraw", { 120.0f, 50.0f }))
        {
            if (m_ComputerDroped)
            {
                ChessEngine::takeBack();
                m_ChessBoard.Withdraw();
            }
        }

        if (ImGui::Button("Concede", { 120.0f, 50.0f }))
        {
            if (m_Turn == ChessColor::Black)
                m_ChessBoard.m_Winner = ChessColor::White;
            else
                m_ChessBoard.m_Winner = ChessColor::Black;
        }

        ImGui::SameLine();
        if (ImGui::Button("MainMenu", { 120.0f, 50.0f }))
        {
            m_Status = Status::MainMenu;
        }

        ImGui::Separator();
        ImGui::Text("Setting");
        ImGui::SetNextItemWidth(120.0f);
        if (ImGui::Combo("Diffculty", &m_Diffculty, m_Diffculties, IM_ARRAYSIZE(m_Diffculties)))
        {
            ChessEngine::setLevel(m_Diffculty + 1);
        }

        ImGui::SetNextItemWidth(120.0f);
        ImGui::Combo("First", &m_CurrentFirst, m_First, IM_ARRAYSIZE(m_First));

        break;
    case Status::GameOver:
        if (ImGui::Button("Replay", { 120.0f, 50.0f }))
        {
            m_ChessBoard.Init();
            m_Status = Status::Gaming;
            m_Turn   = ChessColor::Black;
            InitGameEngine();
        }

        ImGui::Separator();
        ImGui::Text("Setting");
        ImGui::SetNextItemWidth(120.0f);
        if (ImGui::Combo("Diffculty", &m_Diffculty, m_Diffculties, IM_ARRAYSIZE(m_Diffculties)))
        {
            ChessEngine::setLevel(m_Diffculty + 1);
        }

        ImGui::SetNextItemWidth(120.0f);
        ImGui::Combo("First", &m_CurrentFirst, m_First, IM_ARRAYSIZE(m_First));

        break;
    }

    m_ChessBoard.OnImGuiRender();


    ImGui::Separator();
    if (ImGui::Button("Exit Game", { 120.0f, 50.0f }))
    {
        auto& app = Application::Get();
        app.Close();
    }
    ImGui::Spacing();
    // =========== Debug =============
    ImGui::SeparatorText("Debug (Player Don't Touch)");

    if (ImGui::TreeNodeEx("Camera", ImGuiTreeNodeFlags_DefaultOpen))
    {
        ImGui::DragFloat3("Camera Position", glm::value_ptr(m_CameraPosition));
        m_Camera->SetPosition(m_CameraPosition);
        ImGui::TreePop();
        ImGui::Spacing();
    }
    if (ImGui::TreeNodeEx("Renderer Status", ImGuiTreeNodeFlags_DefaultOpen))
    {
        // Render Status
        auto stats = Dionysen::Renderer2D::GetStats();
        {
            ImGui::Text("Renderer2D Stats:");
            ImGui::Text("Draw Calls: %d", stats.DrawCalls);
            ImGui::Text("Quads: %d", stats.QuadCount);
            ImGui::Text("Vertices: %d", stats.GetTotalVertexCount());
            ImGui::Text("Indices: %d", stats.GetTotalIndexCount());
            ImGui::Separator();
        }
        ImGui::TreePop();
        ImGui::Spacing();
    }
    if (ImGui::TreeNodeEx("Frame Rate", ImGuiTreeNodeFlags_DefaultOpen))
    {
        // Frame rate
        ImGui::Text("%.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
        ImGui::TreePop();
        ImGui::Spacing();
    }

    ImGui::End();

    if (m_ChessBoard.m_Winner != ChessColor::None)
    {
        m_Status = Status::GameOver;
        if (m_Status == Status::GameOver)
        {
            ImGui::Begin("Congratulation!");
            if (m_ChessBoard.m_Winner == ChessColor::Black)
                ImGui::Text("BLACK WON!");
            if (m_ChessBoard.m_Winner == ChessColor::White)
                ImGui::Text("WHITE WON!");
            ImGui::Text("Do you want to play again?");
            if (ImGui::Button("Yes"))
            {
                m_Status = Status::Gaming;
                m_ChessBoard.Init();
                m_Turn = ChessColor::Black;
                InitGameEngine();
            }
            ImGui::SameLine();
            if (ImGui::Button("No"))
            {
                m_ChessBoard.Init();
                m_Status = Status::MainMenu;
                m_Turn   = ChessColor::Black;
            }

            ImGui::End();
        }
    }

    if (!m_ComputerDroped)
    {
        ImGui::Begin("HINT");
        ImGui::Text("Computer is thinking ... ");
        ImGui::Text("Please wait a moment.");
        ImGui::End();
    }
}


bool GameLayer::OnWindowsResize(WindowResizeEvent& e)
{
    auto& window = Application::Get().GetWindow();

    if (e.GetWidth() < e.GetHeight() * 1.5f)
    {
        window.ResizeWindow(e.GetHeight() * 1.5f, e.GetHeight());
        CreateCamera(e.GetHeight() * 1.5f, e.GetHeight());
    }
    else
        CreateCamera(e.GetWidth(), e.GetHeight());

    CalculateCameraPosition();
    return false;
}

bool GameLayer::OnMouseMoved(MouseMovedEvent& e)
{
    if (m_Status != Status::Gaming)
    {
        m_ChessBoard.m_HoveredChess = Chess(0, 0, ChessColor::None, 0);
        return false;
    }

    if (!m_ComputerDroped)
        return false;

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

    if (m_Status != Status::Gaming)
    {
        return false;
    }

    if (!m_ComputerDroped)
        return false;

    int chessX = static_cast<int>(std::round(MouseToWorldPosition().x));
    int chessY = static_cast<int>(std::round(MouseToWorldPosition().y));

    if (chessX >= -7 && chessX <= 7 && chessY >= -7 && chessY <= 7)
    {

        if (m_CurrentFirst == 0)
        {
            if (m_ChessBoard.Drop(chessX, chessY, m_Turn))
            {
                if (m_Turn == ChessColor::Black)
                {
                    if (!m_ComputerThread.joinable())
                    {
                        m_ComputerThread = std::thread(&GameLayer::ComputerDrop, this, chessX, chessY);
                        m_ComputerDroped = false;
                        m_ComputerThread.detach();
                    }
                    // m_Turn = ChessColor::White;
                }
                else
                {
                    m_Turn = ChessColor::Black;
                }
            }
        }
        else
        {
            if (m_ChessBoard.Drop(chessX, chessY, m_Turn))
            {
                if (m_Turn == ChessColor::White)
                {
                    if (!m_ComputerThread.joinable())
                    {
                        m_ComputerThread = std::thread(&GameLayer::ComputerDrop, this, chessX, chessY);
                        m_ComputerDroped = false;
                        m_ComputerThread.detach();
                    }
                    // m_Turn = ChessColor::White;
                }
                else
                {
                    m_Turn = ChessColor::White;
                }
            }
        }
    }

    return false;
}

void GameLayer::InitGameEngine()
{
    if (m_CurrentFirst == 1)
    {
        ChessEngine::reset(1);
        m_ChessBoard.Drop(ChessEngine::getLastPosition().x - 7, ChessEngine::getLastPosition().y - 7, ChessColor::Black);
        m_Turn = ChessColor::White;
    }
    else
    {
        ChessEngine::reset(0);
    }
    ChessEngine::setLevel(m_Diffculty + 1);
}

void GameLayer::ComputerDrop(int x, int y)
{
    ChessEngine::nextStep(x + 7, y + 7);
    if (m_Turn == ChessColor::Black)
    {
        m_ChessBoard.Drop(ChessEngine::getLastPosition().x - 7, ChessEngine::getLastPosition().y - 7, ChessColor::White);
    }
    else if (m_Turn == ChessColor::White)
    {
        m_ChessBoard.Drop(ChessEngine::getLastPosition().x - 7, ChessEngine::getLastPosition().y - 7, ChessColor::Black);
    }

    m_ComputerDroped = true;
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

// Recalculate the camera positon after creating a camera
void GameLayer::CalculateCameraPosition()
{
    auto& window = Application::Get().GetWindow();

    float x = 1.0f - (float)window.GetHeight() / (float)window.GetWidth();
    float y = 0.0f;
    float z = 1.0f;

    glm::vec4 screenPos = glm::vec4(x, y, z, 1.0f);
    glm::vec4 worldPos  = glm::inverse(m_Camera->GetViewProjectionMatrix()) * screenPos;

    // normalize, devide w
    worldPos /= worldPos.w;
    m_CameraPosition   = worldPos;
    m_CameraPosition.z = 0.5f;

    m_Camera->SetPosition(m_CameraPosition);
}