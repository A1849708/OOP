#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    int binary[14]={1,1,1,0,1,1,1,0,1,0,1,1};
    int count=13;
    int sum=0;
    binary[13]=1;
    binary[12]=1;
    for(int i=0;i<14;i++){
        sum=sum+binary[i]*pow(2,count);
        count--;
    }
    cout<<sum<<endl;
    return 0;
}