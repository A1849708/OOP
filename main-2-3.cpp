#include <iostream>

using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main (){
    int integers[5]={1,2,3,4,5};

    cout<<sum_if_palindrome(integers, 5)<<endl;
    return 0;
}