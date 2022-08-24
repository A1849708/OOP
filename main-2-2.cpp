#include <iostream>

using namespace std;

extern void hexDigits(int *numbers,int length);

int main(){
    int arr[10]={1,2,3,4,5,15,14,13,12,10};
    int *numbers=arr;
    hexDigits(numbers,10);
    return 0;
}