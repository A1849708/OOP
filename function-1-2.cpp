#include <iostream>

using namespace std;

void printNumbers(int *numbers,int length){
    int count=1;
    for (int i=0;i<length;i++){
        cout<<count<<" "<<*(numbers+i);
        count++;
    }
}