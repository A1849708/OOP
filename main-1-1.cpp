#include <iostream>

using namespace std;

extern void print_ascending(int *vals, int len);

int main (){
    int vals[]={1,2,3,4,5,5,9,10,11,15,4,3,2,1};
    int len=14;

    print_ascending(vals,len);
    return 0;
}