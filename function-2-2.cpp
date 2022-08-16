#include <iostream>

using namespace std;

int max_sub_sum(int *nums,int length){
    int sum=0;
    int count=0;

    if(length<1){
        sum=0;
    }
    else {
        for (int i=0;i<length-1;i++){
            if (*(nums+i)+*(nums+i+1)>=sum){
                sum=*(nums+i)+*(nums+i+1);
                if (*(nums+i)<0){
                    count++;
                }
            }
        }
    }

    if (count==length){
        sum=0;
    }
    return sum;
}