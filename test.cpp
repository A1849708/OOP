#include <iostream>
using namespace std;
int main (void){

    int array[8]={14, 9, 20, 19, 12, 13, 4, 3};
    int element=0;
    int n =8;
    int min=array[0];
    int max=array[0];
    int difference;
    int count=0;

    for (int k=0;k<n;k++){
        if (array[k]<min){
            min=array[k];
            element=k;
        }
        else if (array[k]>max){
            max=array[k];
        }
    }

    
    int a=array[0];
    cout<<a<<endl;
    difference=max-min;
    cout<<difference<<endl;
    array[0]=min;
    cout<<array[0]<<endl;
    array[element]=a;
    int a=array[0];

    for (int k=0;k<n;k++){
    cout<<array[k]<<',';
    }
    cout<<endl;
    

    for (int i=1;i<n;i++){
        for (int j=count;j<n;j++){
            if (array[j]==a){
                a=array[j];
                element=j;
            }
            else{
                if((array[j]-a)<difference){
                    difference=(array[j]-a);
                    a=array[j];
                    element=j;
                }
            }
        }
        array[element]=array[i];
        array[i]=a;
        difference=max-min;
        count++;
    }

    for (int k=0;k<n;k++){
    cout<<array[k]<<',';
    }
}

