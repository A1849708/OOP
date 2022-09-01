#include <iostream>
#include <string>
#include "Capybara.h"
using namespace std;

Capybara::Capybara(){
    capyName=" ";
    capyAge=0;
};

void Capybara::setName(string nName){capyName=nName; }
void Capybara::setAge(int nAge){capyAge=nAge; }

string Capybara::getName(){return capyName;}
int Capybara::getAge(){return capyAge;}