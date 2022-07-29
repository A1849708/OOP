#include <iostream>
#include <cmath>

bool is_fanarray(int array[], int n)
{
    bool isFan = true;
    int benchmark = array[0];
    int count = 1;
    int arrayCount = 0;
    int number=((n+1)/2);

    if (n<1){
        isFan= false;
    }

    for (int i = 1; i < number; i++)
    {
        if (array[i] > benchmark)
        {
            count++;
            benchmark = array[i];
        }
        else
        {
            isFan= false;
        }
    }

    if (count == number)
    {
        for (int i = 0; i < n; i++)
        {
            if (array[i] == array[n - i - 1])
            {
                arrayCount++;
            }
            else
            {
                isFan= false;
            }
        }
        if (arrayCount == n)
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