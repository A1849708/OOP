#include "Cage.h"
#include <string>
#ifndef CLINIC_H
#define CLINIC_H

using namespace std;

class Clinic : public Cage{
    private:
        int count;
        int size;
        string clinicName;
    public:
        Clinic();                                      
        Clinic(string name, int max_size);                                                  
        int get_number_of_cages();                 
        string get_name();                        
        Cage * get_cages();                           
        bool add_cage(Cage new_cage);                
        //~Clinic();                                     
};
#endif