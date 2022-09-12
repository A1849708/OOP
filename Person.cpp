#include <iostream>
#include <string>
#include "Person.h"
#include "Player.h"

using namespace std;

Person::Person(){
    personMove[1]="a";
}

void Person::move(){
    cout<<"enter in move: ";
    cin>>personMove[1];
}; 

