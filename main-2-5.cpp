#include <iostream>

extern bool is_descending(int array[],int n);

int main(void){
    int array[5]={5,4,3,2,5};
    std::cout<<"the condition is "<<is_descending(array,5)<<std::endl;
}