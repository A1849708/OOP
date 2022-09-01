#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <string>
#include "Person.h"

class Airplane{
    private:
        string pilot;
        string coPilot;
    public:
Airplane();
    void setPilot(string thePilot);     
    void setCoPilot(string theCoPilot);  
    string getPilot();
    string getCoPilot();
    void printDetails();   
};
#endif