#include <iostream>
#include <cmath>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits){
    int sum=0;
    for (int i=0;i<number_of_digits;i++){
        if (binary_digits[i]==1){
            sum=sum+(binary_digits[i]*pow(2,(number_of_digits-1)));
            number_of_digits--;
        }
        else{
            number_of_digits--;
        }
    }
    return sum;
}