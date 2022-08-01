#include <iostream>
#include <cmath>

using namespace std;

void shift_left(int binary[]){
    bool left=true;
    if (binary[0]==1){
        left=true;
    }
    else{
        left=false;
    }
    cout<<left;

    for(int i=0;i<9;i++){
        cout<<binary[i];
    }
}