#include <iostream>

extern int num_count(int array[], int n, int number);

    int main(void){
        int n;
        int array[5]={1,2,3,4,5};
        int number;
        std::cout<<"The number is: "<<num_count(array,5,3)<<std::endl;
        return 0;
    }