#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person::Person(){
    name=" ";
    salary=0;
};

void Person::setName(string myName){name=myName;}
void Person::setSalary(int mySalary){salary=mySalary;}

string Person::getName(){return name;}
int Person::getSalary(){return salary;}