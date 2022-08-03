#include <iostream>

using namespace std;

bool is_palindrome(int integers[], int length)
{
    bool isPalindrome=true;

    for (int i = 0; i < length; i++){
        if (integers[i]==integers[length-i-1]){
            isPalindrome=true;
        }
        else{
            isPalindrome=false;
        }
    }
    return isPalindrome; 
}

int sum_array_elements(int integers[], int length){
    int sum=0;

    for (int i=0;i<length;i++){
        sum=sum+integers[i];
    }
    return sum;
}

int main (void){
    int result;
    int integers[5]={1,2,3,4,5};
    int length =5;

    if (length<1){
        result= -1;
        //cout<<result<<endl;
    }

    if (is_palindrome(integers,length)==true){
        result=sum_array_elements(integers,length);
        //cout<<result<<endl;
    }
    else if (is_palindrome(integers,length)==false){
        result =-2;
        //cout<<result<<endl;
    }

    cout<<result<<endl;
}
