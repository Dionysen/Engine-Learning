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
    bool IsGameOver() const
    {
        return m_GameOver;
    }
    void Reset();

  private:
    void CreatePillar(int index, float offset);
    bool CollisionTest();
    void GameOver();


  private:
    bool m_GameOver = false;

    float m_PillarTarget = 30.0f;
    int   m_PillarIndex  = 0;

    Player    m_Player;
    glm::vec3 m_PillarHSV = { 0.0f, 0.8f, 0.8f };

    std::vector<Pillar>                m_Pillars;
    Dionysen::Ref<Dionysen::Texture2D> m_TriangleTexture;

    float m_GameLevel  = 0.0f;
    float m_LevelSpeed = 0.05f;
};
