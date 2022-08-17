#include <iostream>

using namespace std;

extern void max_sub_sum(int *nums,int length);

int main(){
    int arr[10]={ 31, -41, 59, 26, -53, 58, 97, -93, -23, 84};
    int *num=arr;

    max_sub_sum(num,10);
    return 0;

}
