#include <stdio.h>

float ft_array_avg(int *arr, int size)
{
    int i ;
    float avg ;
    int sum ;
    
    if (size <= 0)
    {
        return 0 ;
    }

    i = 0;
    sum = 0;

    while (i < size)
    {
        sum = arr[i] + sum ;
        i++;
    }

    avg = (float)sum / size;

    return avg ; 
    
}
