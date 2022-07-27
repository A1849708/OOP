#include <iostream>

extern double sum_even(double array[], int n);

int main(void){
    double array[0]={};
    std::cout<<sum_even(array,0)<<std::endl;
}
