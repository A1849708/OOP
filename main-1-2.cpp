#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main(){

    Person one(1,"alex");
    one.setName("big boy");
    one.setSalary(55);

    cout<<one.getName()<<endl;
    cout<<one.getSalary()<<endl;
    return 0;
}