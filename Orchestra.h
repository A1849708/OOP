#include<string>
#include <iostream>
#include "Musician.h"
#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include <vector>

using namespace std;

class Orchestra: public Musician{
    private:
        int size;
        int count;

    public:
        vector<Musician>array;
        Orchestra();           
        Orchestra(int group);
        int get_current_number_of_members(); 
        bool has_instrument(std::string instrument); 
        Musician *get_members();
        bool add_musician(Musician new_musician);
};
#endif