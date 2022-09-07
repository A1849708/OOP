#ifndef WAGON_H
#define WAGON_H
#include "Capybara.h"
#include <string>
#include <vector>
using namespace std;

class Wagon: public Capybara{

    private:
        int count;

    public:
        vector<Capybara>array;
        Wagon();                               
        bool addCapybara(Capybara newCapy);
        void emptyWagon();                    
        void printCapybaras();
};
#endif
