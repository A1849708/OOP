#include <iostream>
using namespace std;

int main (void){
    int integer=0;
    int array[32];
    int i=0;
    int j=0;
    int count=0;
    cout<<"enter in base number: ";
    cin>>integer;
    while (integer!=0){
        array[i]=integer%2;
        i++;
        integer=integer/2;
    }

    for (int j=i-1;j>=0;j--){
        cout<<array[j];
    }
    cout<<endl;
    return 0;
}