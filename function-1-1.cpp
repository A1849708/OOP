#include <iostream>

using namespace std;

void print_ascending(int *vals, int len){
    int count=*vals;
    cout<<count;
        if (*(vals+1)>=count){
        cout<<"*";
    }
    for (int i=1;i<len;i++){
        if (*(vals+i)>=count){
            cout<<*(vals+i);
            count=*(vals+i);
            if (*(vals+i+1)>=count){
                cout<<"*";
            }
        }
        else{
            break;
        }
    }
}