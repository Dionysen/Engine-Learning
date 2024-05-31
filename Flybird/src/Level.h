#pragma once

#include <Dionysen.h>
#include <vector>
#include "Player.h"
#include "Texture.h"

struct Pillar
{
    glm::vec3 TopPosition    = { 0.0f, 10.0f, 0.0f };
    glm::vec2 TopScale       = { 15.0f, 20.0f };
    glm::vec3 BottomPosition = { 10.0f, 10.0f, 0.0f };
    glm::vec2 BottomScale    = { 15.0f, 20.0f };
};

class Level
{
  public:
    Level();

    void Init();

    void OnUpdate(Dionysen::Timestep ts);
    void OnRender();
    void OnImGuiRender();

    Player& GetPlayer()
    {
       return m_Player;
    }

  private:
    void CreatePillar(int index, float offset);

    bool CollisionTest();
    void GameOver();

  private:
    float m_PillarTarget = 30.0f;
    int   m_PillarIndex  = 0;

    Player m_Player;

    std::vector<Pillar>    m_Pillars;
    std::vector<glm::vec2> m_Points;

    Dionysen::Ref<Dionysen::Texture2D> m_TriangleTexture;
};
