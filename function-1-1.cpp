#include <iostream>

using namespace std;

int *readNumbers(){
    int *nums= new int (10);
    int length =10;
    for (int i=0;i<length;i++){
        cout<<"["<<i<<"]";
        cout<<"enter a number";
        cin>>*(nums+i);
    }
    return nums;
}

void printNumbers(int* numbers, int length){
    for (int i=0;i<length;i++){
        cout<<i<<" "<<*(numbers+i);
    }
}