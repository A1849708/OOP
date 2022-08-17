#include <iostream>

using namespace std;

extern int max_sub_sum(int *nums,int length);

int main(){
    int arr[10]={ 1,1,1,1,1,1,1,-100,5,6};
    int *num=arr;

    cout<<max_sub_sum(num,10)<<endl;
    return 0;
    //31, -41, 59, 26, -53, 58, 97, -93, -23, 84
}
