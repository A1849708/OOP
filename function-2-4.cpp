#include <iostream>

bool is_ascending(int array[],int n){
    bool isAscending=true;
    int benchmark=array[0];
    int count=1;
    for (int i=1;i<n;i++){
        if (array[i]>=benchmark){
            count++;
            benchmark=array[i];
        }
        else{
            count--;
        }
    }
    if (count==n){
        isAscending=true;
    }
    else{
        isAscending=false;
    }
    return isAscending;
}