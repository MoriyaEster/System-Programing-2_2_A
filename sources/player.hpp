#pragma once
#include <string>
using namespace std;

class Player{

public:
    std::string name;
    int cardsHasWon;
    bool isPlaying;

    Player(){};
    Player(std::string name){
        this->name = name;
    }

    int stacksize();
    int cardesTaken();
};
