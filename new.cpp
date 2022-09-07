#include "Musician.h"
#include "Orchestra.h"

Orchestra::Orchestra(){
    size = 0;
    orchestra = new Musician[size];  
    occupance = 0;  
}

Orchestra::Orchestra(int _size){
    size = _size;
    orchestra = new Musician[size];
    occupance = 0;
}

int Orchestra::get_current_number_of_members(){
    return occupance;
}

bool Orchestra::has_instrument(string instrument){
    for (int i = 0; i < size; i++){
        if (orchestra[i].get_instrument() == instrument){
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members(){
    return orchestra;
}

bool Orchestra::add_musician(Musician new_musician){
    if (occupance >= size){
        return false;
    } else if (occupance < size){
        *(orchestra + occupance) = new_musician;
        occupance++;
        return true;
    }

    return true;
}

Orchestra::~Orchestra(){
    delete [] orchestra;
}