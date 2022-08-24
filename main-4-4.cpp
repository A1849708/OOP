#include <iostream>

using namespace std;

extern int *readNumbers(int length);
extern int secondSmallestSum(int *numbers,int length);

int main (){
    int* p=readNumbers(4);
    cout<<secondSmallestSum(p,4)<<endl;
    return 0;
}