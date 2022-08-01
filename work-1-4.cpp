#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    int binary[10]={1,1,0,1,1,1,0,1,0,0};
    int count=9;
    int sum=0;
    for(int i=0;i<10;i++){
        sum=sum+binary[i]*pow(2,count);
        count--;
    }
    cout<<sum<<endl;
    return 0;
}