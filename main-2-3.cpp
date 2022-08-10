#include <iostream>

using namespace std;

extern int palindrome_sum(int integers[], int length);

int main (void){
    int integers[4]={1,2,2,1};
    int length;

    cout<<palindrome_sum(integers,4)<<endl;
    return 0;
}