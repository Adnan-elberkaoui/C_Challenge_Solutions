#include <stdio.h>

void ft_print_above_avg(int *tab, int size)
{
    int i ;
    int sum ;
    int avg ;

    i = 0 ;
    sum = 0 ;

    while (i < size)
    {
        sum = tab[i] + sum ;
        i++;
    }
    avg = sum / size ;

    i = 0 ;

    while (i < size)
    {
        if (tab[i] > avg)
        {
            printf("%d ",tab[i]);
        }
        i++;
    }
}


   
