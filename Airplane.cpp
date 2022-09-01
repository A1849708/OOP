#include <iostream>
#include <string>
#include "Person.h"
#include "Airplane.h"
using namespace std;

Airplane::Airplane(){
    pilot="uvawewe";
    coPilot="ozaz";
};

void Airplane::setPilot(string thePilot){pilot=thePilot;}
void Airplane::setCoPilot(string theCoPilot){coPilot=theCoPilot;}  

string Airplane::getPilot(){return coPilot;}
string Airplane:: getCoPilot(){return pilot;}

void Airplane:: printDetails(){
    cout<<pilot<<endl;
    cout<<coPilot<<endl;
}