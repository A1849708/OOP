#include <iostream>

using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main (void){
    int binary_digits[30]={1,0,0};
    int number_of_digits;

    cout<<bin_to_int(binary_digits,3)<<endl;
    return 0;
}