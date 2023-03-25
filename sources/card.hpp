#pragma once
#include <string>
using namespace std;

class Card{

public:
    int num;
    std::string color;

    Card(){};
    Card(int num, std::string color){
        this->num = num;
        this->color = color;
    }

};
