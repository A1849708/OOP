#include <iostream>

using namespace std;

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

int main (){
    int *p = readNumbers();
    int length = 10;
    printNumbers(p,length);
    return 0;
}

