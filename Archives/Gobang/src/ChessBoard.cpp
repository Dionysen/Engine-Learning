#include "ChessBoard.h"
#include "Chess.h"
#include "Log.h"
#include "Renderer2D.h"
#include "imgui.h"
#include <algorithm>
#include <iostream>
#include <string>


void ChessBoard::Init()
{
    for (int i = 0; i < 15; ++i)
    {
        for (int j = 0; j < 15; ++j)
        {
            m_Chesses[i][j] = ChessColor::None;
        }
    }
    m_ChessVector.clear();
    m_Winner = ChessColor::None;
}

ChessBoard::ChessBoard()
{
    Init();
}


void ChessBoard::OnImGuiRender()
{
}

void ChessBoard::OnRender()
{
    DrawChessBoard(m_Size, { 0.0f, 0.0f, 0.0f });
    DrawChesses();
    DrawHoverChess(m_HoveredChess.GetX(), m_HoveredChess.GetY(), m_HoveredChess.GetColor());
}

void ChessBoard::DrawChessBoard(float size, glm::vec3 pos)
{
    // Background
    Dionysen::Renderer2D::DrawQuad({ 0.0f, 0.0f, -0.1f }, { 15.0f, 15.0f }, { 0.9f, 0.81f, 0.63f, 1.0f });

    float gap = size / 14;
    for (int i = -7; i <= 7; ++i)
    {
        Dionysen::Renderer2D::DrawLine({ i * gap + pos.x, -7 * gap + pos.y, 0.0f }, { i * gap + pos.x, 7 * gap + pos.y, 0.0f },
                                       { 0.0f, 0.0f, 0.0f, 1.0 });
    }
    for (int i = -7; i <= 7; ++i)
    {
        Dionysen::Renderer2D::DrawLine({ -7 * gap + pos.x, i * gap + pos.y, 0.0f }, { 7 * gap + pos.x, i * gap + pos.y, 0.0f },
                                       { 0.0f, 0.0f, 0.0f, 1.0 });
    }
}

void ChessBoard::DrawChesses()
{
    float gap = m_Size / 14;
    for (int i = -7; i <= 7; ++i)
    {
        for (int j = -7; j <= 7; ++j)
        {
            if (m_Chesses[i + 7][j + 7] == ChessColor::White)
                Dionysen::Renderer2D::DrawCircle({ i * gap, j * gap, 0.0f }, 0.35, { 1.0f, 1.0f, 1.0f, 1.0f });
            else if (m_Chesses[i + 7][j + 7] == ChessColor::Black)
                Dionysen::Renderer2D::DrawCircle({ i * gap, j * gap, 0.0f }, 0.35, { 0.0f, 0.0f, 0.0f, 1.0f });
        }
    }
}

void ChessBoard::DrawHoverChess(int x, int y, ChessColor color)
{
    float gap = m_Size / 14;
    if (color == ChessColor::Black)
        Dionysen::Renderer2D::DrawCircle({ x * gap, y * gap, 0.0f }, 0.35, { 0.0f, 0.0f, 0.0f, 0.3f });
    else if (color == ChessColor::White)
        Dionysen::Renderer2D::DrawCircle({ x * gap, y * gap, 0.0f }, 0.35, { 1.0f, 1.0f, 1.0f, 0.3f });
    else
        ;
}

bool ChessBoard::Drop(uint32_t x, uint32_t y, ChessColor chess)
{
    if (m_Chesses[x + 7][y + 7] == ChessColor::None)
    {

        m_Chesses[x + 7][y + 7] = chess;

        if (CheckIsWin(x + 7, y + 7, chess) == ChessColor::Black)
        {
            m_Winner = ChessColor::Black;
        }
        else if (CheckIsWin(x + 7, y + 7, chess) == ChessColor::White)
        {
            m_Winner = ChessColor::White;
        }

        if (m_ChessVector.empty())
        {
            m_ChessVector.push_back(Chess(x + 7, y + 7, chess, 0));
        }
        else
        {
            m_ChessVector.push_back(Chess(x + 7, y + 7, chess, m_ChessVector.back().GetStep() + 1));
        }

        return true;
    }
    else
    {
        return false;
    }
}

ChessColor ChessBoard::CheckIsWin(uint32_t x, uint32_t y, ChessColor color)
{
    for (int i = x < 4 ? -x : -4; i <= 0; i++)
    {
        if (m_Chesses[x + i][y] == color && m_Chesses[x + i + 1][y] == color && m_Chesses[x + i + 2][y] == color &&
            m_Chesses[x + i + 3][y] == color && m_Chesses[x + i + 4][y] == color)
        {
            return color;
        }
    }
    for (int i = y < 4 ? -y : -4; i <= 0; i++)
    {
        if (m_Chesses[x][y + i] == color && m_Chesses[x][y + i + 1] == color && m_Chesses[x][y + i + 2] == color &&
            m_Chesses[x][y + i + 3] == color && m_Chesses[x][y + i + 4] == color)
        {
            return color;
        }
    }
    for (int i = std::min(x, y) < 4 ? -std::min(x, y) : -4; i <= 0; i++)
    {
        if (m_Chesses[x + i][y + i] == color && m_Chesses[x + i + 1][y + i + 1] == color && m_Chesses[x + i + 2][y + i + 2] == color &&
            m_Chesses[x + i + 3][y + i + 3] == color && m_Chesses[x + i + 4][y + i + 4] == color)
        {
            return color;
        }
    }
    for (int i = y < 4 ? -y : -4; i <= 0; i++)
    {
        if (m_Chesses[x - i][y + i] == color && m_Chesses[x - i - 1][y + i + 1] == color && m_Chesses[x - i - 2][y + i + 2] == color &&
            m_Chesses[x - i - 3][y + i + 3] == color && m_Chesses[x - i - 4][y + i + 4] == color)
        {
            return color;
        }
    }
    return ChessColor::None;
}
