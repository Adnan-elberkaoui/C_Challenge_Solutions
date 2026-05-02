#include <stdio.h>

int ft_array_min(int *arr, int size)
{
    int i;
    int min ;

    if (size <= 0)
    {
        return 0;
    }

    i = 1 ;
    min = arr[0];

    while (i < size)
    {
        if (arr [i] < min )
        {
            min = arr [i];
        }
        i++;
    }

    return min ;
    
}