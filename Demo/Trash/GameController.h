#pragma once
#include <Dionysen.h>
#include <map>
#include <vector>


namespace Gobang
{

    enum Color
    {
        None = 0,
        Black,
        White,
    };

    struct Position
    {
        Position()
        {
            x = -1;
            y = -1;
        }
        Position(int x, int y)
            : x(x)
            , y(y)
        {
        }
        int x;
        int y;
    };

    struct Chess
    {
        Chess()
        {
            color = None;
            step  = -1;
        }
        Chess(Position pos, Color color, int step)
            : pos(pos)
            , color(color)
            , step(step)
        {
        }

        Position pos;
        Color    color;
        int      step;
    };

    class GameController
    {
      public:
        GameController();
        ~GameController();

        bool isGaming();  // Return m_isGaming

        // Interface For Setting Some Information
        void setBlackTime(int blackTime);
        void setBlackName(std::string blackName);
        void setBlackId(unsigned long blackId);

        void setWhiteTime(int whiteTime);
        void setWhiteName(std::string whiteName);
        void setWhiteId(unsigned long whiteId);

        // Setting status
        void setTurn(Color turn);
        void setStep(int step);
        void setGameStatus(bool isGaming);

        // Operator
        void NewGame();               // Init a new game
        void Drop(int x, int y);      // Drop
        void turnToNext();            // next player
        void retract();               // retract
        void replay();                // replay
        int  isWin(int x, int y);     // is someone win?
        void respondWin(int player);  // respond the result
        void concede();               // concede

      private:
        bool               m_IsGaming;
        Color              m_Turn;
        int                m_Step, m_WhiteTime, m_BlackTime;
        unsigned long      m_BlackPlayerId, m_WhitePlayerId;
        std::string        m_BlackPlayerName, m_WhitePlayerName;
        Chess              CurrentChess;
        std::vector<Chess> m_Board;
        Position           HoverPosition;
        int                m_PositionStatus[15][15];  // chessboard position status

        int m_HumanTurn, m_RobotTurn;
        int m_RobotLevel;
        int m_Time;

        Dionysen::Ref<Dionysen::Timestep> Timer;
        std::map<int, std::string>        Level;
    };
}  // namespace Gobang
