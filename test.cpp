#include <iostream>

using namespace std;

void multiples_of_seven(int *nums,int length){
    for (int i=0;i<length;i++){
        if (*(nums+i)%7==0){
            cout<<*(nums+i)<<endl;
        }
    }
}

int main (){
    int n[4]={1,2,3,4};
    int *nums=n;
    multiples_of_seven(nums,4);
    return 0;
}
