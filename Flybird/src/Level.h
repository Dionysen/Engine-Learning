#pragma once

#include <Dionysen.h>
#include "Player.h"

struct Pillar
{
    glm::vec3 TopPosition    = { 0.0f, 10.0f, 0.0f };
    glm::vec2 TopScale       = { 5.0f, 15.0f };
    glm::vec3 BottomPosition = { 10.0f, 10.0f, 0.0f };
    glm::vec2 BottomScale    = { 5.0f, 15.0f };
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

  private:
    float m_PillarTargets = 30.0f;
    int   m_PillarIndex   = 5;

    Player              m_Player;
    std::vector<Pillar> m_Pillars;
};
