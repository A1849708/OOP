#include <iostream>

using namespace std;

void max_sub_sum(int *nums,int length){
    int sum=0;
    int count=0;
    int max=*nums;

    if(length<1){
        sum=0;
    }
    else {
        for (int i=0;i<length;i++){
            for (int j=count;j<length;j++){
                sum=sum+*(nums+j);
                cout<<"sum is: "<<sum<<endl;
                if (sum>max){
                    max=sum;
                    cout<<"max is: "<<max<<endl;
                }
            }
            sum=0;
            count++;
            cout<<"count is: "<<count<<endl;
            if (count==length-1){
                break;
            }
        }
        if (*(nums+length-1)>max){
            max=*(nums+length-1);
        }
    }

}