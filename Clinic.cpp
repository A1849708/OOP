#include <iostream>
#include <string>
#include "Cage.h"
#include "Clinic.h"

using namespace std;

Clinic::Clinic(){
    count=0;
    size=0;
    clinicName="";
    clinicArray = new Cage [size];
}

Clinic::Clinic(string name, int max_size){
    clinicName=name;
    size=max_size;
    clinicArray = new Cage [size];
    count=0;
}            

string Clinic::get_name(){return clinicName;} 

Cage* Clinic::get_cages(){return clinicArray;}

bool Clinic::add_cage(Cage new_cage){
    if (count>=size){
        return false;
    }
    else if (count<size){
       *(clinicArray + count) = new_cage;
        count++;
        return true;
    }
    return true;
}       

int Clinic::get_number_of_cages(){return count;}       

Clinic::~Clinic(){
    delete[] clinicArray;
}
         