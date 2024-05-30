#include <Dionysen.h>
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

  private:
    glm::vec2 m_Position = { -10.0f, 0.0f };
    glm::vec2 m_Velocity = { 5.0f, 0.0f };

    float m_EnginePower = 0.5f;
    float m_Gravity     = 0.4f;

    Dionysen::Ref<Dionysen::Texture2D> m_ShipTexture;
};
