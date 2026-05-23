#include <unistd.h>

void ft_print_frequent(int *tab, int size)
{
    int i = 0 ;
    int max = 0 ;
    int count = 0 ;

    while (tab[i] < size)
    {
        if (count > max)
        {
            max = count ;
        }
        i++;
    }
    
}