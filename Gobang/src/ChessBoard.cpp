#include "ChessBoard.h"
#include "Chess.h"
#include "Log.h"
#include "Renderer2D.h"

ChessBoard::ChessBoard()
{
    for (int i = 0; i < 15; ++i)
    {
        for (int j = 0; j < 15; ++j)
        {
            m_Chesses[i][j] = ChessColor::None;
        }
    }
}


void ChessBoard::OnImGuiRender()
{
}

void ChessBoard::OnRender()
{
    DrawChessBoard(m_Size, { 0.0f, 0.0f, 0.0f });
    DrawChesses();
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

bool ChessBoard::Drop(uint32_t x, uint32_t y, ChessColor chess)
{
    if (m_Chesses[x + 7][y + 7] == ChessColor::None)
    {
        switch (CheckIsWin(x + 7, y + 7))
        {
        case ChessColor::None:
            break;
        case ChessColor::Black:
            DION_WARN("Black win");
            break;
        case ChessColor::White:
            DION_WARN("White win");
            break;
        }
        m_Chesses[x + 7][y + 7] = chess;
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

ChessColor ChessBoard::CheckIsWin(uint32_t x, uint32_t y)
{
    for (int i = -4; i <= 0; i++)
    {
        if (m_Chesses[x + i][y] == m_ChessVector.back().GetColor() && m_Chesses[x + i + 1][y] == m_ChessVector.back().GetColor() &&
            m_Chesses[x + i + 2][y] == m_ChessVector.back().GetColor() && m_Chesses[x + i + 3][y] == m_ChessVector.back().GetColor() &&
            m_Chesses[x + i + 4][y] == m_ChessVector.back().GetColor())
        {
            return m_ChessVector.back().GetColor();
        }
    }
    for (int i = -4; i <= 0; i++)
    {
        if (m_Chesses[x][y + i] == m_ChessVector.back().GetColor() && m_Chesses[x][y + i + 1] == m_ChessVector.back().GetColor() &&
            m_Chesses[x][y + i + 2] == m_ChessVector.back().GetColor() && m_Chesses[x][y + i + 3] == m_ChessVector.back().GetColor() &&
            m_Chesses[x][y + i + 4] == m_ChessVector.back().GetColor())
        {
            return m_ChessVector.back().GetColor();
        }
    }
    for (int i = -4; i <= 0; i++)
    {
        if (m_Chesses[x + i][y + i] == m_ChessVector.back().GetColor() && m_Chesses[x + i + 1][y + i + 1] == m_ChessVector.back().GetColor() &&
            m_Chesses[x + i + 2][y + i + 2] == m_ChessVector.back().GetColor() &&
            m_Chesses[x + i + 3][y + i + 3] == m_ChessVector.back().GetColor() && m_Chesses[x + i + 4][y + i + 4] == m_ChessVector.back().GetColor())
        {
            return m_ChessVector.back().GetColor();
        }
    }
    for (int i = -4; i <= 0; i++)
    {
        if (m_Chesses[x - i][y + i] == m_ChessVector.back().GetColor() && m_Chesses[x - i - 1][y + i + 1] == m_ChessVector.back().GetColor() &&
            m_Chesses[x - i - 2][y + i + 2] == m_ChessVector.back().GetColor() &&
            m_Chesses[x - i - 3][y + i + 3] == m_ChessVector.back().GetColor() && m_Chesses[x - i - 4][y + i + 4] == m_ChessVector.back().GetColor())
        {
            return m_ChessVector.back().GetColor();
        }
    }
    return ChessColor::None;
}