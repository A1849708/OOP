#include <iostream>
#include <cmath>

int median_array(int array[], int n){
       
int element=0;
    int min=array[0];
    int max=array[0];
    int difference;
    int count=0;
    int temp=0;
    int median=(n/2);
    int medianEven=((n/2)-1);
    int result=0;

    if (n<1){
        return 0;
    }

    for (int i=count;i<n;i++){
        if (array[i]>=max){
            max=array[i];
        }
    }

    for (int k=0;k<n;k++){
        for (int i=count;i<n;i++){
            if (array[i]<=min){
                min=array[i];
                
                element=i;
            }
        }
        temp=array[k];
        array[k]=min;
        min=max;
        array[element]=temp;
        count++;
    }

    if (n%2!=0){
        result= array[median];
        return result;
    }
    else {
        result=((array [median]+array [medianEven])/2);
        return result;
    }
    
}