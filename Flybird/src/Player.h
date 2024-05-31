#include <Dionysen.h>
#include <cstdint>
class Player
{
  public:
    Player();

    void LoadAssets();

    void OnUpdate(Dionysen::Timestep ts);
    void OnRender();
    void OnImGuiRender();

    inline glm::vec2 GetPosition()
    {
        return m_Position;
    }
    inline float GetRotation()
    {
        return m_Velocity.y * 4.0f - 90.0f;
    }
    void Reset();

    uint32_t GetScore()
    {
        return (uint32_t)(m_Position.x + 10.0f) / 10.0f;
    }

  private:
    glm::vec2 m_Position = { -10.0f, 0.0f };
    glm::vec2 m_Velocity = { 5.0f, 0.0f };

    float m_EnginePower = 0.5f;
    float m_Gravity     = 0.4f;

    Dionysen::Ref<Dionysen::Texture2D> m_ShipTexture;
};
