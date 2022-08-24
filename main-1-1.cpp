#include <iostream>

using namespace std;

extern int *readNumbers(int nums);
extern void printNumbers(int *numbers,int length);

int main (){
    *readNumbers();
    printNumbers(*numbers,10);
    return 0;
}