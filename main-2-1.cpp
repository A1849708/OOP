#include <iostream>
#include <string>
#include "Capybara.h"
#include "Wagon.h"
using namespace std;

int main(){
    
    Wagon first;
    Capybara al;

    al.setName("alex");
    al.setAge(18);

    Capybara kau;

    kau.setName("Kaustubha");
    kau.setAge(19);

    Capybara mat;

    mat.setName("matthew");
    mat.setAge(19);

    Capybara sye;

    sye.setName("Syed");
    sye.setAge(19);

    first.addCapybara(al);
    first.addCapybara(kau);
    first.addCapybara(sye);

    first.printCapybaras();

    return 0;
}