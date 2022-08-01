#include <iostream>

using namespace std;

bool is_palindrome(int integers[], int length)

{
    bool isFan = true;
    int benchmark = integers[0];
    int count = 1;
    int arrayCount = 0;
    int number=((length+1)/2);

    if (length<1){
        isFan= false;
    }

    for (int i = 1; i < number; i++)
    {
        if (integers[i] > benchmark)
        {
            count++;
            benchmark = integers[i];
        }
        else
        {
            isFan= false;
        }
    }

    if (count == number)
    {
        for (int i = 0; i < length; i++)
        {
            if (integers[i] == integers[length - i - 1])
            {
                arrayCount++;
            }
            else
            {
                isFan= false;
            }
        }
        if (arrayCount == length)
        {
            isFan = true;
        }
        else
        {
            isFan = false;
        }
    }
    else
    {
        isFan = false;
    }

    return isFan;
}
int sum_array_elements(int integers[], int length){
    int sum=0;
    if (length<1){
        return -1;
    }
    for (int i=0;i<length;i++){
        sum=sum+integers[i];
    }
    return sum;
}


int sum_if_palindrome(int integers[], int length){
    int result;
    if (is_palindrome(integers,length)==true){
        result=sum_array_elements(integers,length);
        return result;
    }
    else{
        return -2;
    }
}