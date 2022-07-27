#include <iostream>

extern double weighted_average(int array[],int n);

int main(void){
    int array[1]={1};
    std::cout<<"the number is "<<weighted_average(array,0)<<std::endl;

    return 0;
}