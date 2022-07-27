#include <iostream>

extern int count_evens(int number);

    int main(void){
        int number=0;
        std::cout<<"enter in number: ";
        std::cin>>number;
        std::cout<<"The number is: "<<count_evens(number)<<std::endl;
        return 0;
    }
    