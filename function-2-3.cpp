#include <iostream>

using namespace std;

bool is_array_palindrome(int integers[], int length){
    bool isPalindrome=true;
    for (int i=0;i<length;i++){
        if (integers[i]!=integers[length-i-1]){
            isPalindrome=false;
        }
    }
    return isPalindrome;
}

int sum_integers(int integers[], int length){
    int sum=0;
    for (int i=0;i<length;i++){
        sum=sum+integers[i];
    }
    return sum;
}

int palindrome_sum(int integers[], int length){
    int result=0;
    bool check=is_array_palindrome(integers, length);
    int total=sum_integers(integers, length);

    if (length<1){
        result=-1;
    }
    else if (check==false){
        result=-2;
    }
    else if (check==true){
        result=total;
    }
    return result;
}