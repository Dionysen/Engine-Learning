#include "PossiblePosition.h"
namespace Computer
{
    PossiblePosition::PossiblePosition()
    {
        m_Directions.push_back(std::pair<int, int>(1, 1));
        m_Directions.push_back(std::pair<int, int>(1, -1));
        m_Directions.push_back(std::pair<int, int>(-1, 1));
        m_Directions.push_back(std::pair<int, int>(-1, -1));
        m_Directions.push_back(std::pair<int, int>(1, 0));
        m_Directions.push_back(std::pair<int, int>(0, 1));
        m_Directions.push_back(std::pair<int, int>(-1, 0));
        m_Directions.push_back(std::pair<int, int>(0, -1));
    }

    PossiblePosition::~PossiblePosition()
    {
    }

    void PossiblePosition::AddPossiblePositions(ChessColor board[15][15], const Position& p)
    {
        unsigned int       i;
        std::set<Position> addedPositions;

        for (i = 0; i < m_Directions.size(); i++)
        {
            if (!IsInBoard(p.x + m_Directions[i].first, p.y + m_Directions[i].second))
                continue;

            if (board[p.x + m_Directions[i].first][p.y + m_Directions[i].second] == ChessColor::None)
            {
                Position                                      pos(p.x + m_Directions[i].first, p.y + m_Directions[i].second);
                std::pair<std::set<Position>::iterator, bool> insertResult = m_CurrentPossiblePositions.insert(pos);

                if (insertResult.second)
                    addedPositions.insert(pos);
            }
        }

        HistoryItem history;
        history.m_AddedPositions = addedPositions;

        if (m_CurrentPossiblePositions.find(p) != m_CurrentPossiblePositions.end())
        {
            m_CurrentPossiblePositions.erase(p);
            history.m_RemovedPosition = p;
        }
        else
        {
            history.m_RemovedPosition.x = -1;
        }

        m_History.push_back(history);
    }

    void PossiblePosition::Rollback()
    {
        if (m_CurrentPossiblePositions.empty())
            return;

        HistoryItem history = m_History[m_History.size() - 1];
        m_History.pop_back();

        std::set<Position>::iterator iter;

        for (iter = history.m_AddedPositions.begin(); iter != history.m_AddedPositions.end(); iter++)
        {
            m_CurrentPossiblePositions.erase(*iter);
        }

        if (history.m_RemovedPosition.x != -1)
            m_CurrentPossiblePositions.insert(history.m_RemovedPosition);
    }

    const std::set<Position>& PossiblePosition::GetCurrentPossiblePositions()
    {
        return m_CurrentPossiblePositions;
    }

    void PossiblePosition::RemoveAll()
    {
        m_CurrentPossiblePositions.clear();
        m_History.clear();
    }
    bool PossiblePosition::IsInBoard(int x, int y)
    {
        if (x >= 0 && x < 15 && y >= 0 && y < 15)
            return true;
        return false;
    }
}  // namespace Computer
