#include <iostream>

using namespace std;

int main (){
    int x=42;
    int *p=&x;
    *p=*p+5;
    cout<<*p<<endl;
    cout<<*p-2<<endl;
    return 0;
}