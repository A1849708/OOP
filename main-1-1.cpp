#include <iostream>

using namespace std;

extern int *readNumbers(int nums);
extern void printNumbers(int *numbers,int length);

int main (){
    int nums[10];
    for (int i=0;i<10;i++){
        cin>>nums[i];
    }
    int *readNumbers(nums);
    return 0;
}