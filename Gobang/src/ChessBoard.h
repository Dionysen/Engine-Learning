#pragma once
#include <Dionysen.h>
#include "Chess.h"

class ChessBoard
{
  public:
    ChessBoard();
    ~ChessBoard() = default;

    void Init();

    void OnRender();
    void OnImGuiRender();

    void SetChessBoardSize(float size)
    {
        m_Size = size;
    }
    void DrawChessBoard(float size, glm::vec3 pos);
    void DrawChesses();
    void DrawHoverChess(int x, int y, ChessColor color);

    bool Drop(uint32_t x, uint32_t y, ChessColor chess);

    Chess m_HoveredChess;

  private:
    ChessColor CheckIsWin(uint32_t x, uint32_t y, ChessColor color);

  private:
    glm::vec2 m_Position = { 0.0f, 0.0f };
    float     m_Size     = 14.0;


    ChessColor m_Chesses[15][15];

    std::vector<Chess> m_ChessVector;
};
