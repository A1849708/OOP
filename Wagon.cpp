#include <iostream>
#include <string>
#include <vector>
#include "Capybara.h"
#include "Wagon.h"

using namespace std;

Wagon::Wagon(){
    array;
}

bool Wagon::addCapybara(Capybara newCapy){
    if (array.size()<4){
        array.push_back(newCapy);
        return true;
    }
    return false;
    }
void Wagon::emptyWagon(){array.clear();return;}

void Wagon::printCapybaras(){
    for (int i=0;i<array.size();i++){
        cout<<array[i].getName()<<" "<<array[i].getAge()<<endl;
    }
} 