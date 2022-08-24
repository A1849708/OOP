#include <iostream>

using namespace std;

int *readNumbers(){
    int* array = new int (10);
    for (int i=0;i<3;i++){
        cout<<"enter number here: "<<endl;
        cin>>*(array+i);
    }
    return array;
}

bool equalsArray(int *numbers1,int *numbers2,int length){
    bool isEqual=false;
    int count=0;
    for (int i=0;i<length;i++){
        if(*(numbers1+i)==*(numbers2+i)){
            count++;
        }
    }
    if (count==length){
        isEqual=true;
    }
    return isEqual;
}