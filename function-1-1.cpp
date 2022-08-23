#include <iostream>

using namespace std;

int *readNumbers(int nums){
    int *numbers=new int (10);
    *numbers=nums;
    return numbers;
}