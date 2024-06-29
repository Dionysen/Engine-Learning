#pragma once

#include <set>
#include <vector>
#include "Chess.h"

namespace Computer
{

    struct Position
    {
        int x;
        int y;
        int score;
        Position()
        {
        }
        Position(int x, int y)
        {
            this->x = x;
            this->y = y;
            score   = 0;
        }
        Position(int x, int y, int score)
        {
            this->x     = x;
            this->y     = y;
            this->score = score;
        }
        bool operator<(const Position& pos) const
        {
            if (score != pos.score)
            {
                return score > pos.score;
            }
            if (x != pos.x)
            {
                return x < pos.x;
            }
            else
            {
                return y < pos.y;
            }
        }
    };

    struct HistoryItem
    {
        std::set<Position> m_AddedPositions;
        Position           m_RemovedPosition;
    };

    class PossiblePosition
    {
      public:
        PossiblePosition();
        ~PossiblePosition();
        void                      AddPossiblePositions(ChessColor board[15][15], const Position& p);
        void                      Rollback();
        const std::set<Position>& GetCurrentPossiblePositions();
        void                      RemoveAll();

      private:
        bool IsInBoard(int x, int y);

      private:
        std::set<Position>               m_CurrentPossiblePositions;
        std::vector<HistoryItem>         m_History;
        std::vector<std::pair<int, int>> m_Directions;
    };

}  // namespace Computer
