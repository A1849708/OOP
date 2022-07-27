#include <iostream>

extern double array_mean(int array[],int n);

    int main(void){
        int n;
        int array[5]={1,2,3,6,7};
        std::cout<<"The number is: "<<array_mean(array,-1)<<std::endl;
        return 0;
    }