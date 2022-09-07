#include <iostream>
#include <string>
#include "Cage.h"
#include "Clinic.h"

using namespace std;

Clinic::Clinic(){
    count=0;
    size=0;
    clinicName="";
    Cage* ClinicArray=new int [size];
}

Clinic::Clinic(string name, int max_size){
    clinicName=name;
    size=max_size;

}        

int Clinic::get_number_of_cages(){return count;}             

string Clinic::get_name(){return clinicName;} 

bool Clinic::add_cage(Cage new_cage){
    if (count>size){
        return false;
    }
    else {

        count++;
    }
}               

//Clinic::~Clinic();            