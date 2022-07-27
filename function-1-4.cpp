#include <iostream>

int sum_two_arrays(int array[],int secondarray[], int n){
    if (n<1){
        return 0;
    }
    else {
        int sum = 0;
        int sum1 = 0;
        int sum_arrays =0;
        for (int i=0; i<n; i++){
            sum=sum+array[i];
            sum1=sum1+secondarray[i];
        }
        sum_arrays=sum+sum1;
        return sum_arrays;
    }
}