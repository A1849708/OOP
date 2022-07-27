#include <iostream>

extern int min_element(int array[], int n);

    int main(void){
        int array[5]={6001,43242,34241321,22,34};
        std::cout<<"The number is: "<<min_element(array, 5)<<std::endl;
        return 0;
    }