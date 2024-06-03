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
    Chess(uint32_t x, uint32_t y, ChessColor color, uint32_t step)
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

  private:
    ChessColor m_Color;
    uint32_t   m_X, m_Y, m_Step;
};