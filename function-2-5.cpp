#include <iostream>

bool is_descending(int array[], int n)
{
    bool isDescending = true;
    int benchmark = array[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (array[i] <= benchmark)
        {
            count++;
            benchmark = array[i];
        }
        else
        {
            count--;
        }
    }
    if (count == n)
    {
        isDescending = true;
    }
    else
    {
        isDescending = false;
    }
    return isDescending;
}