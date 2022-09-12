#ifndef PLAYER_H
#define PLAYER_H
#include "Player.h"
#include <string>

using namespace std;

class Player{
    private:
        string move[1];
    public:
        Player();
        void move();
        string getMoves();
        char getMove(); 
        bool win(Player * opponent);
};

#endif