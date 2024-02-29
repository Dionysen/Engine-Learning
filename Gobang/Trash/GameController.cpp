#include "GameController.h"
#include "ChessEngine.h"
#include "BaseDefine.h"

namespace Gobang
{
    GameController::GameController()
        : HoverPosition(-1, -1)
    {
        m_Time            = 1200;
        m_BlackPlayerName = "Black player";
        m_WhitePlayerName = "White player";

        // robot's initial
        ChessEngine::beforeStart();
        m_RobotLevel = 4;

        ChessEngine::setLevel(m_RobotLevel);
        ChessEngine::reset(0);
        m_HumanTurn = BLACK_CHESS;
        m_RobotTurn = WHITE_CHESS;
    }

    GameController::~GameController()
    {
    }

    bool GameController::isGaming()
    {
        return m_IsGaming;
    }

    void GameController::setBlackTime(int blackTime)
    {
        m_BlackTime = blackTime;
    }

    void GameController::setBlackName(std::string blackName)
    {
        m_BlackPlayerName = std::move(blackName);
    }

    void GameController::setBlackId(unsigned long blackId)
    {
        m_BlackPlayerId = blackId;
    }
    void GameController::setWhiteTime(int whiteTime)
    {
        m_WhiteTime = whiteTime;
    }
    void GameController::setWhiteName(std::string whiteName)
    {
        m_WhitePlayerName = std::move(whiteName);
    }
    void GameController::setWhiteId(unsigned long whiteId)
    {
        m_WhitePlayerId = whiteId;
    }
    void GameController::setTurn(Color turn)
    {
        m_Turn = turn;
    }
    void GameController::setStep(int step)
    {
        m_Step = step;
    }
    void GameController::setGameStatus(bool isGaming)
    {
        m_IsGaming = isGaming;
    }
    void GameController::NewGame()
    {
        m_Board.clear();
        m_Turn     = Black;
        m_Step     = 1;
        m_IsGaming = true;
        ChessEngine::reset(m_HumanTurn);
        m_BlackTime  = m_Time;
        m_WhiteTime  = m_Time;
        CurrentChess = Chess({ -1, -1 }, None, -1);
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 15; j++)
            {
                m_PositionStatus[i][j] = NO_CHESS;
            }
        }
        if (m_HumanTurn == WHITE_CHESS)
        {
            Drop(ChessEngine::getLastPosition().x, ChessEngine::getLastPosition().y);
        }
    }
    void GameController::Drop(int x, int y)
    {
        bool isExist = false;
        if (isGaming())
        {
            for (auto i = m_Board.begin(); i != m_Board.end(); i++)
            {
                if (i->pos.x == x && i->pos.y == y)
                    isExist = true;
            }
            if (!isExist)
            {
                CurrentChess = Chess({ x, y }, m_Turn, m_Step);  // Create a new chess
                m_Board.push_back(CurrentChess);                 // add chess to board
                m_PositionStatus[x][y] = m_Turn;                 // update position
                m_Step++;
                turnToNext();
            }
        }
    }
    void GameController::turnToNext()
    {
    }
    void GameController::retract()
    {
        CurrentChess = m_Board.back();

        m_PositionStatus[CurrentChess.pos.x][CurrentChess.pos.y] = NO_CHESS;
        m_Board.pop_back();

        ChessEngine::takeBack();
        CurrentChess = m_Board.back();

        m_PositionStatus[CurrentChess.pos.x][CurrentChess.pos.y] = NO_CHESS;
        m_Board.pop_back();
    }
    void GameController::replay()
    {
    }
    int GameController::isWin(int x, int y)
    {
        return 0;
    }
    void GameController::respondWin(int player)
    {
    }
    void GameController::concede()
    {
    }

}  // namespace Gobang