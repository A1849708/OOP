#include <iostream>

extern int median_array(int array[], int n);

int main(void){
    int array[8]={19, 20, 16, 5, 8, 1, 7, 11};
    std::cout<<"the number is: "<<median_array(array,8)<<std::endl;
    return 0;
}