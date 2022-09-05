#include <iostream>
#include <string>
#include"Musician.h"
using namespace std;

Musician::Musician(){
    instrument=" ";
    experience=0;
}

Musician::Musician(string item, int years){
    instrument=item;
    experience=years;
}
    
string Musician::get_instrument(){return instrument;}
int Musician::get_experience(){return experience;}  




