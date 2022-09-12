#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <string>

using namespace std;

class Computer: public Player{
    private: 
        string compMove[1];
    public:
        Computer();
        Computer(string letter);       
};

#endif