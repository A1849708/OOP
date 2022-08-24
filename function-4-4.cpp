#include <iostream>

using namespace std;

int secondSmallestSum(int *numbers,int length) {
    int max=*numbers;
    int second=*numbers;
    int sum=0;
    int count=0;

    for (int i=0;i<length-1;i++){
        for (int j=count;j<length;j++){
            sum=sum+*(numbers+j);
            if (sum>max){
                max=sum;
            }
        }
        sum=0;
        count++;
        if (*(numbers+9)>max){
            max=*(numbers+9);
        }
    }

    for (int i=0;i<length-1;i++){
        for (int j=count;j<length;j++){
            sum=sum+*(numbers+j);
            if (sum>second&&sum<max){
                second=sum;
            }
        }
        sum=0;
        count++;
        if (*(numbers+9)>second&&*(numbers+9)<max){
            second=*(numbers+9);
        }
    }
}