#include <iostream>

extern int max_element(int array[], int n);

    int main(void){
        int array[5]={10,1,2,3,11};
        std::cout<<"The number is: "<<max_element(array, 5)<<std::endl;
        return 0;
    }