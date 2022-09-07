#include <iostream>
#include <string>
#include "Cage.h"
using namespace std;

int main (){
    Cage bruno("bunatelli",77);
    cout<<bruno.get_name()<<endl;
    cout<<bruno.get_IDnum()<<endl;

    return 0;
}