#include <iostream>

using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main (void){
    int binary_digits[13]={1,0,0,0,0,1,1,1,0,0,1,0,1};
    cout<<binary_to_int(binary_digits, 13)<<endl;
    return 0;
}