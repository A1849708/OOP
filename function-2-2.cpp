#include <iostream>

using namespace std;

int max_sub_sum(int *nums,int length){
    int sum=0;
    int count=0;
    int max=*nums;
    int negCount=0;

    if(length<1){
        max=0;
    }
    else {
        for (int i=0;i<length;i++){
            for (int j=count;j<length;j++){
                sum=sum+*(nums+j);
                if (sum>max){
                    max=sum;
                }
            }
            sum=0;
            count++;
            if (count==length-1){
                break;
            }
        }
        if (*(nums+length-1)>max){
            max=*(nums+length-1);
        }
        for (int i=0;i<length;i++){
            if (*(nums+i)<0){
                negCount++;
            }
        }
        if (negCount==length){
            max=0;
        }

    }
    return max;
}