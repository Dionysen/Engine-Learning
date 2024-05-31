#include "Level.h"
#include "FPSCamera.h"
#include "GameLayer.h"
#include "Random.h"
#include "Renderer2D.h"
#include "Texture.h"
#include "TimeStep.h"
#include "Color.h"
#include "glm/ext/matrix_transform.hpp"
#include "glm/fwd.hpp"
#include "glm/trigonometric.hpp"
#include "mono/metadata/metadata.h"
#include <cmath>
#include <debugapi.h>
#include <winuser.h>

using namespace Dionysen;


static bool PointInTri(const glm::vec2& p, glm::vec2& p0, const glm::vec2& p1, const glm::vec2& p2)
{
    float s = p0.y * p2.x - p0.x * p2.y + (p2.y - p0.y) * p.x + (p0.x - p2.x) * p.y;
    float t = p0.x * p1.y - p0.y * p1.x + (p0.y - p1.y) * p.x + (p1.x - p0.x) * p.y;

    if ((s < 0) != (t < 0))
        return false;

    float A = -p1.y * p2.x + p0.y * (p2.x - p1.x) + p0.x * (p1.y - p2.y) + p1.x * p2.y;
    return A < 0 ? (s <= 0 && s + t >= A) : (s >= 0 && s + t <= A);
}


Level::Level()
{
}

void Level::Init()
{
    m_TriangleTexture = Texture2D::Create("Flybird/assets/textures/Triangle.png");
    m_Player.LoadAssets();

    m_Pillars.resize(5);
    for (int i = 0; i < 5; ++i)
    {
        CreatePillar(i, i * 10.0f);
    }
}
void Level::OnRender()
{

    if (CollisionTest())
    {
        GameOver();
        return;
    }
    const auto& playerPos = m_Player.GetPosition();

    Renderer2D::DrawQuad({ playerPos.x, 0.0f, -0.8f }, { 50.0f, 50.0f }, { 0.3f, 0.3f, 0.3f, 1.0f });

    Renderer2D::DrawQuad({ playerPos.x, 34.0f }, { 50.0f, 50.0f }, Color::Black);
    Renderer2D::DrawQuad({ playerPos.x, -34.0f }, { 50.0f, 50.0f }, Color::Black);

    for (auto& pillar : m_Pillars)
    {
        Renderer2D::DrawRotatedQuad(pillar.TopPosition, pillar.TopScale, 180.0f, m_TriangleTexture);
        Renderer2D::DrawQuad(pillar.BottomPosition, pillar.BottomScale, m_TriangleTexture);
    }

    m_Player.OnRender();

    m_Points.clear();
}

void Level::OnUpdate(Timestep ts)
{
    m_Player.OnUpdate(ts);
    if (m_Player.GetPosition().x > m_PillarTarget)
    {
        CreatePillar(m_PillarIndex, m_PillarTarget + 20.0f);
        m_PillarIndex = ++m_PillarIndex % m_Pillars.size();
        m_PillarTarget += 10.0f;
    }
}

void Level::OnImGuiRender()
{
    m_Player.OnImGuiRender();
}

void Level::CreatePillar(int index, float offset)
{
    Pillar& pillar = m_Pillars[index];

    pillar.TopPosition.x    = offset;
    pillar.BottomPosition.x = offset;

    float center = Random::Float() * 5.0f - 2.5f;
    float gap    = Random::Float() * 3.0f - 1.5f;

    pillar.TopPosition.y    = 10.0f + center + gap + 0.5f;
    pillar.BottomPosition.y = -10.0f + center + gap + 0.5f;
}

bool Level::CollisionTest()
{
    // Calculate the player's vertices
    glm::vec4 playerVertices[4] = {
        { -0.5f, -0.5f, 0.0f, 1.0f }, { 0.5f, -0.5f, 0.0f, 1.0f }, { 0.5f, 0.5f, 0.0f, 1.0f }, { -0.5f, 0.5f, 0.0f, 1.0f }
    };

    glm::vec4   playerTransformedVerts[4];
    const auto& pos = m_Player.GetPosition();

    for (int i = 0; i < 4; ++i)
    {
        playerTransformedVerts[i] = glm::translate(glm::mat4(1.0f), { pos.x, pos.y, 1.0 }) *
                                    glm::rotate(glm::mat4(1.0f), glm::radians(m_Player.GetRotation()), { 0.0f, 0.0f, 1.0f }) *
                                    glm::scale(glm::mat4(1.0f), { 1.0f, 1.3f, 1.0f }) * playerVertices[i];
        m_Points.emplace_back(playerTransformedVerts[i].x, playerTransformedVerts[i].y);
    }


    // To match the triangle.png (each corner is 10% from the texture edge)
    glm::vec4 pillarVertices[3] = {
        { -0.5f + 0.1f, -0.5f + 0.1f, 0.0f, 1.0f },
        { 0.5f - 0.1f, -0.5f + 0.1f, 0.0f, 1.0f },
        { 0.0f + 0.0f, 0.5f - 0.1f, 0.0f, 1.0f },
    };

    for (auto& p : m_Pillars)
    {
        glm::vec2 tri[3];
        // Top pillars
        for (int i = 0; i < 3; ++i)
        {
            tri[i] = glm::translate(glm::mat4(1.0f), { p.TopPosition.x, p.TopPosition.y, 0.0f }) *
                     glm::rotate(glm::mat4(1.0f), glm::radians(180.0f), { 0.0f, 0.0f, 1.0f }) *
                     glm::scale(glm::mat4(1.0f), { p.TopScale.x, p.TopScale.y, 1.0f }) * pillarVertices[i];
            m_Points.emplace_back(tri[i].x, tri[i].y);
        }

        for (auto& vert : playerTransformedVerts)
        {
            if (PointInTri({ vert.x, vert.y }, tri[0], tri[1], tri[2]))
                return true;
        }

        // Bottom pillars
        for (int i = 0; i < 3; i++)
        {
            tri[i] = glm::translate(glm::mat4(1.0f), { p.BottomPosition.x, p.BottomPosition.y, 0.0f }) *
                     glm::scale(glm::mat4(1.0f), { p.BottomScale.x, p.BottomScale.y, 1.0f }) * pillarVertices[i];
            m_Points.emplace_back(tri[i].x, tri[i].y);
        }

        for (auto& vert : playerTransformedVerts)
        {
            if (PointInTri({ vert.x, vert.y }, tri[0], tri[1], tri[2]))
                return true;
        }
    }
    return false;
}

void Level::GameOver()
{
    m_Player.Reset();

    m_PillarTarget = 30.0f;
    m_PillarIndex  = 0;
    for (int i = 0; i < 5; i++)
        CreatePillar(i, i * 10.0f);
}
