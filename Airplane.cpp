#include <iostream>
#include <string>
#include "Person.h"
#include "Airplane.h"

using namespace std;

Airplane::Airplane(){
    flightName="--";
}

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot){
    flightName=callsign;
    one=thePilot;
    two=theCoPilot;
}
void Airplane::setPilot(Person thePilot){
    one=thePilot;
}     

Person Airplane::getPilot(){
    return one;}

void Airplane:: setCoPilot(Person theCoPilot){
    two=theCoPilot;} 

Person Airplane::getCoPilot(){
    return two;}

void Airplane:: setFlight(string callsign){
    flightName=callsign;
}

string Airplane:: getFlight(){  
    return flightName;
}

void printDetails(){
    cout<<"this is flight name "<<Airplane::getFlight<<endl;
    cout<<"this is pilot "<<Airplane::getPilot<<" with salary of "<<Airplane::getSalary<<endl;
    cout<<"this is co-pilot "<<Airplane::getCoPilot<<" with salary of "<<Airplane::getSalary<<endl;
} 