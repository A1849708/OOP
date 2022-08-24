#include <iostream>

using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main (){
    int* ptr=readNumbers();
    int* ptr2=readNumbers();
    cout<<equalsArray(ptr,ptr2,10)<<endl;

    return 0;
}