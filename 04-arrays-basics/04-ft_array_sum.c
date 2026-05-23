#include <stdio.h>

int ft_array_sum(int *arr, int size)
{
    int i ;
    int sum ;

    if (size <= 0)
    {
        return 0 ;
    }

    i = 0 ;
    sum = 0;

    while (i < size )
    {
        sum = sum + arr[i];
        i++;
    }
    return sum;

}
