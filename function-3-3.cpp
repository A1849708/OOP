#include<iostream>

double weighted_average(int array[], int n){
    double count;
    double sum=0;

    if (n<1){
        return 0;
    }
    
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (array[j]==array[i]){
                count++;
            }
        }
        sum=sum+(array[i]*(count/n));
        count=0;
    }
    return sum;
}