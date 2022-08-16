#include <iostream>

using namespace std;

extern void multiples_of_seven(int *nums,int length) ;

int main(){

    int array[4]={21,81,82,63};
    int *nums=array;

    multiples_of_seven(nums,4);
    return 0;
}