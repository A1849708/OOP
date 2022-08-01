#include <iostream>

using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main (void){
    int integers[6]={1,2,3,3,2,1};

    cout<<sum_if_palindrome(integers, 6)<<endl;
    return 0;
}