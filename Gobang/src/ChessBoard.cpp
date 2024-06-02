#include "ChessBoard.h"
#include "Renderer2D.h"

ChessBoard::ChessBoard()
{
}


void ChessBoard::OnImGuiRender()
{
}

void ChessBoard::OnRender()
{
    DrawChessBoard(50.0f, { 0.0f, 0.0f, 0.0f });
}

void ChessBoard::DrawChessBoard(float size, glm::vec3 pos)
{
    float gap = size / 14;
    for (int i = -7; i <= 7; ++i)
    {
        Dionysen::Renderer2D::DrawLine({ i * gap, -7 * gap, 0.0f }, { i * gap, 7 * gap, 0.0f }, { 1.0, 1.0, 1.0, 1.0 });
    }
    for (int i = -7; i <= 7; ++i)
    {
        Dionysen::Renderer2D::DrawLine({ -7 * gap, i * gap, 0.0f }, { 7 * gap, i * gap, 0.0f }, { 1.0, 1.0, 1.0, 1.0 });
    }
}