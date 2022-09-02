#include <iostream>
#include <string>
#include "Person.h"
#include "Airplane.h"
using namespace std;

Airplane::Airplane(){
    flight=" ";
}

Airplane::Airplane(string newChange, Person pilot, Person coPilot){
    flight=newChange;
    one=pilot;
    two=coPilot;
}

void Airplane::setPilot(Person pilot){one=pilot;}
void Airplane::setCoPilot(Person coPilot){two=coPilot;}

Person Airplane::getPilot(){return one;}
Person Airplane:: getCoPilot(){return two;}

void Airplane:: printDetails(){
    cout<<flight<<endl;
    cout<<one.getName()<<endl;
    cout<<one.getName()<<endl;
}