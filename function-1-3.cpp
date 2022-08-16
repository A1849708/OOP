#include <iostream>

using namespace std;

void copy_integers(int old_array[],int new_array[],int length){
    int *ptrOld=old_array;
    int *ptrNew=new_array;
    
    for (int i=0;i<length;i++){
        *(ptrNew+i)=*(ptrOld+i);
    }
}