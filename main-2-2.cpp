#include <iostream>

using namespace std;

extern int max_sub_sum(int *nums,int length);

int main(){
    int arr[6]={-10,-5,100,-2,-4,-2};
    int *num=arr;

    cout<<max_sub_sum(num,6)<<endl;
    return 0;
}