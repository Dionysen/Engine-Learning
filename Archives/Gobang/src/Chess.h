#pragma once
#include <Dionysen.h>

enum class ChessColor
{
    None  = 0,
    Black = 1,
    White = 2,
};

class Chess
{
  public:
    Chess(uint32_t x = 0, uint32_t y = 0, ChessColor color = ChessColor::None, uint32_t step = 0)
        : m_Color(color)
        , m_X(x)
        , m_Y(y)
        , m_Step(step)
    {
    }
    ~Chess()
    {
    }

    uint32_t GetStep()
    {
        return m_Step;
    }

    ChessColor GetColor()
    {
        return m_Color;
    }

    // For displaying step
    glm::vec4 GetRealReverseColor()
    {
        if (m_Color == ChessColor::White)
            return { 0.0f, 0.0f, 0.0f, 1.0f };
        else if (m_Color == ChessColor::Black)
            return { 1.0f, 1.0f, 1.0f, 1.0f };
        else
            return { 0.0f, 0.0f, 0.0f, 0.0f };
    }

    uint32_t GetX()
    {
        return m_X;
    }
    uint32_t GetY()
    {
        return m_Y;
    }

  private:
    ChessColor m_Color;
    uint32_t   m_X, m_Y, m_Step;
};