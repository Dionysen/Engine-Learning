#include "ComputerPlayer.h"
#include "Chess.h"
#include <algorithm>

namespace Computer
{
    ComputerPlayer::ComputerPlayer()
        : m_ZobristValue(0)
        , m_MaxDepth(1)
    {
        m_Random.Init();

        m_Patterns = {
            { "11111", 50000 }, { "011110", 4320 }, { "011100", 720 }, { "001110", 720 }, { "011010", 720 }, { "010110", 720 },
            { "11110", 720 },   { "01111", 720 },   { "11011", 720 },  { "10111", 720 },  { "11101", 720 },  { "001100", 120 },
            { "001010", 120 },  { "010100", 120 },  { "000100", 20 },  { "001000", 20 },
        };
        std::vector<std::string> patternStrs;
        for (size_t i = 0; i < m_Patterns.size(); i++)
        {
            patternStrs.push_back(m_Patterns[i].pattern);
        }
        m_AhoCorasick = AhoCorasick(patternStrs);
    }


    ComputerPlayer::~ComputerPlayer()
    {
    }

    ChessColor ComputerPlayer::CheckWinner()
    {
        return ChessColor();
    }

    void ComputerPlayer::Withdraw()
    {
    }
    Chess ComputerPlayer::NextStep(Position pos)
    {
        return Chess(0, 0, ChessColor::None, 0);
    }
    Chess ComputerPlayer::NextStep(int x, int y)
    {
        m_ChessBoard[x][y] = ChessColor::Black;
        m_ChessVector.push_back(Chess(x, y, ChessColor::Black, 0));

        Chess bestChess(-1, -1, ChessColor::None, 0);
        int   maxScore = std::numeric_limits<int>::min();

        std::vector<Chess> moves = GenerateMoves(ChessColor::White);
        for (auto& move : moves)
        {
            // 执行走法
            m_ChessBoard[move.GetX()][move.GetY()] = ChessColor::White;
            UpdateHash(move);

            int score = AlphaBetaSearch(m_MaxDepth - 1, std::numeric_limits<int>::min(), std::numeric_limits<int>::max(), ChessColor::Black);

            // 撤销走法
            m_ChessBoard[move.GetX()][move.GetY()] = ChessColor::None;
            UpdateHash(move);

            if (score > maxScore)
            {
                maxScore  = score;
                bestChess = move;
            }
        }

        m_ChessBoard[bestChess.GetX()][bestChess.GetY()] = ChessColor::White;
        m_ChessVector.push_back(bestChess);

        return bestChess;
    }
    void ComputerPlayer::RePlay(First fisrt)
    {
    }
    Chess ComputerPlayer::GetLastChess()
    {
        return m_ChessVector.back();
    }

    void ComputerPlayer::SetLevel(int level)
    {
        m_MaxDepth = level;
    }

    int ComputerPlayer::EvaluatePoint(ChessColor board[BOARD_WIDTH][BOARD_WIDTH], Chess chess)
    {
        int          pointScore;
        unsigned int i, j;

        pointScore = 0;

        std::string blackPatternStr[4];
        std::string whitePatternStr[4];

        for (i = std::max(0, (int)chess.GetX() - 5); i < (unsigned int)std::min(BOARD_WIDTH, (int)chess.GetX() + 6); ++i)
        {

            if (i != (int)chess.GetX())
            {
                blackPatternStr[0].push_back(board[i][chess.GetY()] == chess.GetColor()   ? '1'
                                             : board[i][chess.GetY()] == ChessColor::None ? '0'
                                                                                          : '2');
                whitePatternStr[0].push_back(board[i][chess.GetY()] == chess.GetColor()   ? '2'
                                             : board[i][chess.GetY()] == ChessColor::None ? '0'
                                                                                          : '1');
            }
            else
            {
                blackPatternStr[0].push_back('1');
                whitePatternStr[0].push_back('1');
            }
        }
        for (i = std::max(0, (int)chess.GetX() - 5); i < (unsigned int)std::min(BOARD_WIDTH, (int)chess.GetY() + 6); ++i)
        {
            if (i != (int)chess.GetY())
            {
                blackPatternStr[1].push_back(board[chess.GetX()][i] == chess.GetColor()   ? '1'
                                             : board[chess.GetX()][i] == ChessColor::None ? '0'
                                                                                          : '2');
                whitePatternStr[1].push_back(board[chess.GetX()][i] == chess.GetColor()   ? '2'
                                             : board[chess.GetX()][i] == ChessColor::None ? '0'
                                                                                          : '1');
            }
            else
            {
                blackPatternStr[1].push_back('1');
                whitePatternStr[1].push_back('1');
            }
        }
        for (i = (int)chess.GetX() - std::min(std::min((int)chess.GetX(), (int)chess.GetY()), 5),
            j  = (int)chess.GetY() - std::min(std::min((int)chess.GetX(), (int)chess.GetY()), 5);
             i < (unsigned int)std::min(BOARD_WIDTH, (int)chess.GetX() + 6) && j < (unsigned int)std::min(BOARD_WIDTH, (int)chess.GetY() + 6);
             i++, j++)
        {
            if (i != (int)chess.GetX())
            {
                blackPatternStr[2].push_back(board[i][j] == chess.GetColor() ? '1' : board[i][j] == ChessColor::None ? '0' : '2');
                whitePatternStr[2].push_back(board[i][j] == chess.GetColor() ? '2' : board[i][j] == ChessColor::None ? '0' : '1');
            }
            else
            {
                blackPatternStr[2].push_back('1');
                whitePatternStr[2].push_back('1');
            }
        }
        for (i = chess.GetX() + std::min(std::min((int)chess.GetY(), BOARD_WIDTH - 1 - (int)chess.GetX()), 5),
            j  = chess.GetY() - std::min(std::min((int)chess.GetY(), BOARD_WIDTH - 1 - (int)chess.GetX()), 5);
             i >= (unsigned int)std::max(0, (int)chess.GetX() - 5) && i < BOARD_WIDTH &&
             j < (unsigned int)std::min(BOARD_WIDTH, (int)chess.GetY() + 6);
             i--, j++)
        {
            if (i != chess.GetX())
            {
                blackPatternStr[3].push_back(board[i][j] == chess.GetColor() ? '1' : board[i][j] == ChessColor::None ? '0' : '2');
                whitePatternStr[3].push_back(board[i][j] == chess.GetColor() ? '2' : board[i][j] == ChessColor::None ? '0' : '1');
            }
            else
            {
                blackPatternStr[3].push_back('1');
                whitePatternStr[3].push_back('1');
            }
        }

        for (i = 0; i < 4; i++)
        {
            std::vector<int> tmp = m_AhoCorasick.search(blackPatternStr[i]);
            for (j = 0; j < tmp.size(); j++)
            {
                pointScore += m_Patterns[tmp[j]].score;
            }

            tmp = m_AhoCorasick.search(whitePatternStr[i]);
            for (j = 0; j < tmp.size(); j++)
            {
                pointScore += m_Patterns[tmp[j]].score;
            }
        }

        return pointScore;
    }

    void ComputerPlayer::Init()
    {
        for (auto& row : m_ChessBoard)
            for (auto& chess : row)
                chess = ChessColor::None;

        m_ChessVector.clear();
    }

    void ComputerPlayer::InitZobrist()
    {
        // std::mt19937_64                         rng(std::random_device{}());
        // std::uniform_int_distribution<uint64_t> dist;

        for (int i = 0; i < BOARD_WIDTH; ++i)
        {
            for (int j = 0; j < BOARD_WIDTH; ++j)
            {
                for (int k = 0; k < 3; ++k)
                {
                    m_ZobristTable[i][j][k] = m_Random.Int();
                }
            }
        }
    }

    void ComputerPlayer::ComputeInitialHash()
    {
        for (int i = 0; i < BOARD_WIDTH; ++i)
        {
            for (int j = 0; j < BOARD_WIDTH; ++j)
            {
                if (m_ChessBoard[i][j] != ChessColor::None)
                {                                           // 如果该位置不是空的
                    ChessColor piece = m_ChessBoard[i][j];  // 0 = empty, 1 = black, 2 = white
                    m_ZobristValue ^= m_ZobristTable[i][j][(uint64_t)piece];
                }
            }
        }
    }

    void ComputerPlayer::UpdateHash(Chess chess)
    {
        uint64_t color = (uint64_t)chess.GetColor();
        m_ZobristValue ^= m_ZobristTable[chess.GetX()][chess.GetY()][color];
    }

    int ComputerPlayer::AlphaBetaSearch(int depth, int alpha, int beta, ChessColor color)
    {
        if (IsTerminalState(depth))
        {
            return EvaluateBoard();
        }

        std::vector<Chess> moves = GenerateMoves(color);

        if (color == ChessColor::White)
        {
            int maxEval = std::numeric_limits<int>::min();
            for (auto& move : moves)
            {
                // 执行走法
                m_ChessBoard[move.GetX()][move.GetY()] = ChessColor::White;
                UpdateHash(move);

                int eval = AlphaBetaSearch(depth - 1, alpha, beta, ChessColor::Black);
                maxEval  = std::max(maxEval, eval);

                // 撤销走法
                m_ChessBoard[move.GetX()][move.GetY()] = ChessColor::None;
                UpdateHash(move);
            }
            return maxEval;
        }
        else
        {
            int minEval = std::numeric_limits<int>::max();
            for (auto& move : moves)
            {
                // 执行走法
                m_ChessBoard[move.GetX()][move.GetY()] = ChessColor::Black;
                UpdateHash(move);

                int eval = AlphaBetaSearch(depth - 1, alpha, beta, ChessColor::White);
                minEval  = std::min(minEval, eval);
                beta     = std::min(beta, eval);

                // 撤销走法
                m_ChessBoard[move.GetX()][move.GetY()] = ChessColor::None;
                UpdateHash(move);
            }
            return minEval;
        }
    }

    bool ComputerPlayer::IsTerminalState(int depth)
    {
        // 如果达到最大搜索深度
        if (depth == 0)
        {
            return true;
        }

        // 检查是否有一方获胜
        ChessColor winner = CheckWinner();
        if (winner != ChessColor::None)
        {
            return true;
        }

        return false;
    }

    int ComputerPlayer::EvaluateBoard()
    {
        int totalScore = 0;
        for (int i = 0; i < BOARD_WIDTH; ++i)
        {
            for (int j = 0; j < BOARD_WIDTH; ++j)
            {
                if (m_ChessBoard[i][j] != ChessColor::None)
                {
                    Chess chess(i, j, m_ChessBoard[i][j], 0);
                    totalScore += EvaluatePoint(m_ChessBoard, chess);
                }
            }
        }
        return totalScore;
    }

    std::vector<Chess> ComputerPlayer::GenerateMoves(ChessColor color) const
    {
        std::vector<Chess> moves;
        for (int i = 0; i < BOARD_WIDTH; ++i)
        {
            for (int j = 0; j < BOARD_WIDTH; ++j)
            {
                if (m_ChessBoard[i][j] == ChessColor::None)
                {
                    moves.push_back(Chess(i, j, color, 0));
                }
            }
        }
        return moves;
    }



}  // namespace Computer
