#include <iostream>

using namespace std;

void print_ascending(int *vals, int len){
    int count=*vals;
    cout<<count<<endl;
    for (int i=1;i<len;i++){
        if (*(vals+i)>count){
            cout<<*(vals+i)<<" ";
            count=*(vals+i);
        }
        else{
            break;
        }
    }
}