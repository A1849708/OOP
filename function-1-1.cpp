#include <iostream>

int sum_diagonal(int array[4][4]){
    int count=0;
    int sum=0;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (i==j)
            sum=sum+array[i][j];
            count++;
        }
    }
    return sum;
}