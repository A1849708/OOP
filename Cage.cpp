#include "Cage.h"
#include <iostream>
#include <string>

using namespace std;

Cage::Cage(){
    name= "";
    number=0;
} 

Cage::Cage(string newName, int newNumber){
    name=newName;
    number=newNumber;
}

string Cage::get_name(){return name;}                       
int Cage::get_IDnum(){return number;}

