#include <iostream>

using namespace std;

int *readNumbers(int length){
    int* array = new int (length);
    for (int i=0;i<length;i++){
        cout<<"enter number here: "<<endl;
        cin>>*(array+i);
    }
    return array;
}

int secondSmallestSum(int *numbers,int length) {
    int min=*numbers;
    int second=*numbers;
    int sum=0;
    int count=0;

    for (int i=0;i<length-1;i++){
        for (int j=count;j<length;j++){
            sum=sum+*(numbers+j);
            if (min>sum){
                min=sum;
            }
        }
        sum=0;
        count++;
        if (min>*(numbers+length-1)){
            min=*(numbers+length-1);
        }
    }

    for (int i=0;i<length-1;i++){
        for (int j=count;j<length;j++){
            sum=sum+*(numbers+j);
            if (second>sum&&sum>min){
                second=sum;
            }
        }
        sum=0;
        count++;
        if (second>*(numbers+length-1)&&*(numbers+length-1)>min){
            second=*(numbers+length-1);
        }
    }
    return second;
}