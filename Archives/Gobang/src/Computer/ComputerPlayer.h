#pragma once
#include "Chess.h"
#include "AhoCorasick.h"
#include "RandomGen.h"
#include "PossiblePosition.h"

namespace Computer
{
#define BOARD_WIDTH 15
#define UNKNOWN_SCORE (10000001)
#define HASH_ITEM_INDEX_MASK (0xffff)
#define MAX_SCORE (10000000)
#define MIN_SCORE (-10000000)


    struct Pattern
    {
        std::string pattern;
        int         score;
    };


    enum class First
    {
        Empty = 0,
        Human,
        Computer
    };

    class ComputerPlayer
    {
      public:
        ComputerPlayer();
        ~ComputerPlayer();

        void       Init();
        ChessColor CheckWinner();
        void       Withdraw();

        // Operate
        Chess NextStep(Position pos);
        Chess NextStep(int x, int y);
        void  RePlay(First fisrt);
        Chess GetLastChess();

        void SetLevel(int level);

        // AI
        int EvaluatePoint(ChessColor board[BOARD_WIDTH][BOARD_WIDTH], Chess chess);

        void InitZobrist();
        void ComputeInitialHash();
        void UpdateHash(Chess chess);

        int                AlphaBetaSearch(int depth, int alpha, int beta, ChessColor color);
        bool               IsTerminalState(int depth);
        int                EvaluateBoard();
        std::vector<Chess> GenerateMoves(ChessColor color) const;

      private:
        std::vector<Pattern> m_Patterns;

        // Global
        ChessColor         m_ChessBoard[15][15];
        std::vector<Chess> m_ChessVector;

        int m_BoardScoreBlack, m_BoardScoreWhite;

        PossiblePosition m_PossiblePosition;

        // AhoCorasick search
        AhoCorasick m_AhoCorasick;

        // Zobrist
        uint64_t m_ZobristTable[BOARD_WIDTH][BOARD_WIDTH][3];
        Random   m_Random;
        uint64_t m_ZobristValue;

        int m_MaxDepth;
    };
}  // namespace Computer
