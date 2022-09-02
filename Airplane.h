#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <string>
#include "Person.h"

using namespace std;

class Airplane: public Person{
    private:
        string flight;
        Person one;
        Person two;
    public:
        Airplane();
        Airplane(string newChange, Person pilot, Person coPilot);
        void setPilot(Person pilot);     
        void setCoPilot(Person coPilot);  
        Person getPilot();
        Person getCoPilot();
        void printDetails();   
};
#endif