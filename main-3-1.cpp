#include <iostream>

extern bool is_fanarray(int array[], int n);

int main(void){
    int array[6]={1,2,3,3,2,1};
    std::cout<<"the number is: "<<is_fanarray(array,6)<<std::endl;
    return 0;
}

