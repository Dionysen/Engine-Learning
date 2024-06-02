#pragma once
#include <Dionysen.h>
class ChessBoard
{
  public:
    ChessBoard();
    ~ChessBoard() = default;
    void OnRender();
    void OnImGuiRender();

    void DrawChessBoard(float size, glm::vec3 pos);

  private:
    glm::vec2 m_Position = { 0.0f, 0.0f };
    glm::vec2 m_Size     = { 50.0f, 50.0f };
};