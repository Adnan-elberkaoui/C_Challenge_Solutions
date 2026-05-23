#include <stdio.h>

void ft_print_even_above_avg(int *tab, int size)
{
    int i;
    int sum;
    int avg;

    if (size <= 0)
        return;

    i = 0;
    sum = 0;

    while (i < size)
    {
        sum += tab[i];
        i++;
    }

    avg = sum / size;

    i = 0;
    while (i < size)
    {
        if (tab[i] > avg && tab[i] % 2 == 0)
            printf("%d ", tab[i]);
        i++;
    }
}