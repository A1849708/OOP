#include <iostream>

int median_array(int array[], int n){
    int min=array[0];
    int max=array[0];
    for (int i=0;i<n;i++){
        if (array[i]>max){
            max=array[i];
        }
        else if (array[i]<min){
            min=array[i];
        }
    }
    int median=(max+min)/2;

}