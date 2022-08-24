#include <iostream>

using namespace std;

extern void print_ascending(int *vals, int len);

int main (){
    int vals[5]={4,2,3,1,2};
    int len=5;

    print_ascending(vals,len);
    return 0;
}