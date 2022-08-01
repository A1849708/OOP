#include <iostream>
#include <cmath>

using namespace std;

extern void shift_left(int binary[]);

int main (void){
    int binary[10]={1,1,0,1,1,1,0,1,0,0};   
    shift_left(binary);
    return 0;
}

