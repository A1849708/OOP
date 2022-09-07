#include <iostream>
#include <string>
#include "Cage.h"
#include "Clinic.h"

using namespace std;

int main(){

    Cage al("alex",44);
    Cage Kau("cow",43);
    Cage chi("chicken",433);
    Clinic vet("derrimut",4);

    vet.add_cage(al);
    vet.add_cage(Kau);

    cout<<vet.get_number_of_cages()<<endl;


    cout<<al.get_name()<<endl;
    cout<<Kau.get_name()<<endl;
    cout<<vet.get_cages()<<endl;

    return 0;
}