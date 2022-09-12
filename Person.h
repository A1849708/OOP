#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "Player.h"

using namespace std;

class Person: public Player{
    private:
        string personMove[1];
    public:
        Person ();
        void move(); 
};

#endif