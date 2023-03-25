#pragma once
#include "player.hpp"
#include <string.h>
namespace ariel
{

    class Game
    {

    public:
        Player player1;
        Player player2;

        Game(){}
        Game(Player player1, Player player2)
        {
            this->player1 = player1;
            this->player2 = player2;
        }

        void playTurn();
        void printLastTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();
    };
}
