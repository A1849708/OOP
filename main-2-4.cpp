#include <iostream>

using namespace std;

int main (){
    int array[3]={1,2,3};
    int* p= array;
    for (int i=0;i<3;i++){
        cout<<*(p+i)<<endl;
    }
    return 0;
}