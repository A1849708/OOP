#include <iostream>
#include <string>
#include "Musician.h"
#include "Orchestra.h"
#include <vector>

using namespace std;

Orchestra::Orchestra(){
    size=0;
    count=0;
    array;
}  

Orchestra::Orchestra(int group){
    size =group; 
}

Musician *get_members();
int Orchestra::get_current_number_of_members(){return size;} 

bool Orchestra::has_instrument(string instrument){
    for (int i=0;i<size<i++){
        if (array[i].get_instrument()==instrument){
            return true;
        }
        else{
            return false;
        }
    }
};
bool Orchestra::add_musician(Musician new_musician){
    if(array.size()==size){
        return false;
    }
    else{
        array.push_back(new_musician);
        size++;
    }
}