#include <iostream>

using namespace std;

void array_min(int integers[], int length){
    int min=integers[0];
    for (int i=0;i<length;i++){
        if (integers[i]<min){
            min=integers[i];
        }
    }
    cout<<min<<endl;
}

void array_max(int integers[], int length){
    int max=integers[0];
    for (int i=0;i<length;i++){
        if (integers[i]>max){
            max=integers[i];
        }
    }
    cout<<max<<endl;
}

int main (){
    int integers[5]={1,2,10,22,3};
    int length=5;
    if (length<1){
        return -1;
    }

    int sum=0;
    //sum=sum+array_min(integers,length)+array_max(integers,length);
    cout<<sum<<endl;

    array_min(integers,length);

}