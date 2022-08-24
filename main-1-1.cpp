#include <iostream>

using namespace std;

extern void print_ascending(int *vals, int len);

int main (){
    int vals[]={1,2,3,4,5,4,3,2,1};
    int len=9;

    print_ascending(vals,len);
    return 0;
}