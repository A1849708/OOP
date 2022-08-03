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

int sum_if_palindrome(int integers[], int length){
    int result;

    if (length<1){
        result= -1;
    }

    if (is_palindrome(integers,length)==true){
        result=sum_array_elements(integers,length);
    }
    else if (is_palindrome(integers,length)==false){
        result =-2;
    }
    return result;
}