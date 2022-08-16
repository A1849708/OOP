#include <iostream>

using namespace std;

extern void copy_integers(int old_array[],int new_array[],int length);

int main (){
    int old_array[3]={1,2,3};
    int new_array[3];
    copy_integers(old_array,new_array,3);
    return 0;
}