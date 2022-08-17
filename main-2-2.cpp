#include <iostream>

using namespace std;

extern int max_sub_sum(int *nums,int length);

int main(){
    int arr[0]={ };
    int *num=arr;

    cout<<max_sub_sum(num,0)<<endl;
    return 0;
}
