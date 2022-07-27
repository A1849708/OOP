#include <iostream>

extern bool is_ascending(int array[],int n);

int main(void){
    int array[5]={1,2,1,4,5};
    std::cout<<"the condition is "<<is_ascending(array,5)<<std::endl;
}