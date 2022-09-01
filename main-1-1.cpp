#include <iostream>
#include <string>
#include "Capybara.h"

using namespace std;

int main(){
    Capybara capy1;
    capy1.setName("alex");
    capy1.setAge(18);

    cout<<capy1.getName()<<endl;
    cout<<capy1.getAge()<<endl;
    return 0;
}