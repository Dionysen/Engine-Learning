#include "Level.h"
#include "FPSCamera.h"
#include "Renderer2D.h"
#include "TimeStep.h"
#include "Color.h"
using namespace Dionysen;

Level::Level()
{
}

void Level::Init()
{
    m_Player.LoadAssets();

    m_Pillars.resize(5);
    for (int i = 0; i < 5; ++i)
    {
        CreatePillar(i, i * 10.0f);
    }
}
void Level::OnRender()
{
    const auto& playerPos = m_Player.GetPosition();
    Renderer2D::DrawQuad({ playerPos.x, 34.0f }, { 50.0f, 50.0f }, Color::Black);
    Renderer2D::DrawQuad({ playerPos.x, -34.0f }, { 50.0f, 50.0f }, Color::Black);
    for (auto& pillar : m_Pillars)
    {
        Renderer2D::DrawQuad(pillar.TopPosition, pillar.TopScale, Color::White);
        Renderer2D::DrawQuad(pillar.BottomPosition, pillar.BottomScale, Color::White);
    }

    m_Player.OnRender();
}

void Level::OnUpdate(Timestep ts)
{
    m_Player.OnUpdate(ts);
    if (m_Player.GetPosition().x > m_PillarTargets)
    {
        CreatePillar(m_PillarIndex, m_PillarTargets + 20.0f);
        m_PillarIndex += m_PillarIndex % m_Pillars.size();
        m_PillarTargets += 10.0f;
    }
}

void Level::OnImGuiRender()
{
    m_Player.OnImGuiRender();
}

void Level::CreatePillar(int index, float offset)
{
    Pillar& pillar          = m_Pillars[index];
    pillar.TopPosition.x    = offset;
    pillar.BottomPosition.x = offset;

    float center = 0.0f;
    float gap    = 2.0f;

    pillar.TopPosition.y    = 10.0f + center + gap + 0.5f;
    pillar.BottomPosition.y = -10.0f + center + gap + 0.5f;
}
