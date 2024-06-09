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