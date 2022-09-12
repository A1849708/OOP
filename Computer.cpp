#include <iostream>
#include <string>
#include "Computer.h"
#include "Player.h"

using namespace std;

Computer::Computer(){
    compMove[1]="A";
}

Computer::Computer(string letter){
    compMove[1]=letter;
}

void Computer::move(){}  