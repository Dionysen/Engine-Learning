#include "Player.h"
#include "Input.h"
#include "KeyCodes.h"
#include "Renderer2D.h"
#include "imgui.h"

using namespace Dionysen;

Player::Player()
{
}

void Player::LoadAssets()
{
    m_ShipTexture = Texture2D::Create("Flybird/assets/textures/Ship.png");
}

void Player::OnRender()
{
    Renderer2D::DrawRotatedQuad(m_Position, { 1.0f, 1.0f }, m_Velocity.y * 4.0f - 90.0f, m_ShipTexture);
}

void Player::OnUpdate(Timestep ts)
{
    if (Input::IsKeyPressed(Dionysen::Key::Space))
    {
        m_Velocity.y += m_EnginePower;
    }
    else
    {
        m_Velocity.y -= m_Gravity;
    }
    m_Velocity.y = glm::clamp(m_Velocity.y, -20.0f, 20.0f);  // Limit the velocity between -20 and 20
    m_Position += m_Velocity * (float)ts;                    // s = vt
}
void Player::OnImGuiRender()
{
    ImGui::DragFloat("EnginePower", &m_EnginePower, 0.1f);
    ImGui::DragFloat("Gravity", &m_Gravity, 0.1f);
}


void Player::Reset()
{
    m_Position = { -10.0f, 0.0f };
    m_Velocity = { 5.0f, 0.0f };
}