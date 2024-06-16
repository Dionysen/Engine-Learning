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
    m_Font = Dionysen::CreateRef<Dionysen::Font>(std::filesystem::path("Archives/Gobang/assets/fonts/opensans/OpenSans-Regular.ttf"));
}


void ChessBoard::OnImGuiRender()
{
    ImGui::Checkbox("Step", &m_IsShowStep);
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

    // Grid
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

    // Border
    Dionysen::Renderer2D::DrawLine({ -7.0375f, -7.0f, -0.01f }, { 7.0375f, -7.0f, 0.0f }, 0.15f, { 0.0f, 0.0f, 0.0f, 1.0f });
    Dionysen::Renderer2D::DrawLine({ -7.0f, -7.0f, -0.01f }, { -7.0f, 7.0f, 0.0f }, 0.15f, { 0.0f, 0.0f, 0.0f, 1.0f });
    Dionysen::Renderer2D::DrawLine({ 7.0f, 7.0f, -0.01f }, { 7.0f, -7.0f, 0.0f }, 0.15f, { 0.0f, 0.0f, 0.0f, 1.0f });
    Dionysen::Renderer2D::DrawLine({ 7.0375f, 7.0f, -0.01f }, { -7.0375f, 7.0f, 0.0f }, 0.15f, { 0.0f, 0.0f, 0.0f, 1.0f });


    // Anchors
    Dionysen::Renderer2D::DrawCircle({ 0.0f, 0.0f, -0.01f }, 0.15, { 0.0f, 0.0f, 0.0f, 1.0f });
    Dionysen::Renderer2D::DrawCircle({ 4 * gap, 4 * gap, -0.01f }, 0.15, { 0.0f, 0.0f, 0.0f, 1.0f });
    Dionysen::Renderer2D::DrawCircle({ -4 * gap, 4 * gap, -0.01f }, 0.15, { 0.0f, 0.0f, 0.0f, 1.0f });
    Dionysen::Renderer2D::DrawCircle({ 4 * gap, -4 * gap, -0.01f }, 0.15, { 0.0f, 0.0f, 0.0f, 1.0f });
    Dionysen::Renderer2D::DrawCircle({ -4 * gap, -4 * gap, -0.01f }, 0.15, { 0.0f, 0.0f, 0.0f, 1.0f });
}

void ChessBoard::DrawChesses()
{
    // Chesses
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

    // Last chess
    if (!m_ChessVector.empty())
        Dionysen::Renderer2D::DrawQuad({ ((int)m_ChessVector.back().GetX() - 7) * gap, ((int)m_ChessVector.back().GetY() - 7) * gap, 0.0f },
                                       { 0.25f, 0.25f }, { 0.0f, 1.0f, 0.0f, 1.0f });



    // Step
    if (!m_IsShowStep || m_ChessVector.size() <= 1)
        return;

    for (auto chess = m_ChessVector.begin(); chess != std::prev(m_ChessVector.end()); ++chess)
    {
        if (chess->GetStep() < 10)
            Dionysen::Renderer2D::DrawString(std::to_string(chess->GetStep()), m_Font,
                                             { ((int)chess->GetX() - 7) * gap - 0.15f, ((int)chess->GetY() - 7) * gap - 0.15f, 0.1f }, { 0.6f, 0.6f },
                                             { chess->GetRealReverseColor(), 0.0f, 0.0f });
        else if (chess->GetStep() >= 10 && chess->GetStep() < 100)
            Dionysen::Renderer2D::DrawString(std::to_string(chess->GetStep()), m_Font,
                                             { ((int)chess->GetX() - 7) * gap - 0.25f, ((int)chess->GetY() - 7) * gap - 0.15f, 0.1f }, { 0.6f, 0.6f },
                                             { chess->GetRealReverseColor(), 0.0f, 0.0f });
        else
        {
            Dionysen::Renderer2D::DrawString(std::to_string(chess->GetStep()), m_Font,
                                             { ((int)chess->GetX() - 7) * gap - 0.35f, ((int)chess->GetY() - 7) * gap - 0.15f, 0.1f }, { 0.5f, 0.5f },
                                             { chess->GetRealReverseColor(), 0.0f, 0.0f });
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

        ChessColor winner = CheckIsWin(x + 7, y + 7, chess);

        if (winner == ChessColor::Black)
        {
            m_Winner = ChessColor::Black;
        }
        else if (winner == ChessColor::White)
        {
            m_Winner = ChessColor::White;
        }

        if (m_ChessVector.empty())
        {
            m_ChessVector.push_back(Chess(x + 7, y + 7, chess, 1));
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

void ChessBoard::Withdraw()
{
    m_Chesses[m_ChessVector.back().GetX()][m_ChessVector.back().GetY()] = ChessColor::None;
    m_ChessVector.pop_back();
    m_Chesses[m_ChessVector.back().GetX()][m_ChessVector.back().GetY()] = ChessColor::None;
    m_ChessVector.pop_back();
}

ChessColor ChessBoard::CheckIsWin(int x, int y, ChessColor color)
{
    // Row
    for (int i = -4; i <= 0; ++i)
    {
        if (x + i < 0 || x + i + 4 > 14)
            continue;

        if (m_Chesses[x + i][y] == color && m_Chesses[x + i + 1][y] == color && m_Chesses[x + i + 2][y] == color &&
            m_Chesses[x + i + 3][y] == color && m_Chesses[x + i + 4][y] == color)
        {
            return color;
        }
    }
    // Columns
    for (int i = -4; i <= 0; ++i)
    {
        if (y + i < 0 || y + i + 4 > 14)
            continue;

        if (m_Chesses[x][y + i] == color && m_Chesses[x][y + i + 1] == color && m_Chesses[x][y + i + 2] == color &&
            m_Chesses[x][y + i + 3] == color && m_Chesses[x][y + i + 4] == color)
        {
            return color;
        }
    }

    for (int i = -4; i <= 0; ++i)
    {
        if (y + i < 0 || y + i + 4 > 14 || x + i < 0 || x + i + 4 > 14)
            continue;

        if (m_Chesses[x + i][y + i] == color && m_Chesses[x + i + 1][y + i + 1] == color && m_Chesses[x + i + 2][y + i + 2] == color &&
            m_Chesses[x + i + 3][y + i + 3] == color && m_Chesses[x + i + 4][y + i + 4] == color)
        {
            return color;
        }
    }
    for (int i = -4; i <= 0; ++i)
    {
        if (y + i < 0 || y + i + 4 > 14 || x - i > 14 || x - i - 4 < 0)
            continue;

        if (m_Chesses[x - i][y + i] == color && m_Chesses[x - i - 1][y + i + 1] == color && m_Chesses[x - i - 2][y + i + 2] == color &&
            m_Chesses[x - i - 3][y + i + 3] == color && m_Chesses[x - i - 4][y + i + 4] == color)
        {
            return color;
        }
    }
    return ChessColor::None;
}
