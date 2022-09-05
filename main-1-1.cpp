#include <iostream>
#include <string>
#include "Musician.h"

using namespace std;

int main (){

    Musician kaustubh("drums",5);
    cout<<kaustubh.get_instrument()<<endl;
    cout<<kaustubh.get_experience()<<endl;


    Musician Domin ("clarinet",1);
    cout<<Domin.get_instrument()<<endl;
    cout<<Domin.get_experience()<<endl;

    return 0;
}