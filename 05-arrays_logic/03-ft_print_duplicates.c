#include <stdio.h>
#include <unistd.h>

void ft_print_duplicates(int *tab, int size)
{
    int i ;
    int found ;
    char fd ;

    i = 0 ;

    while (i < size)
    {
        found = 0 ;

        while (found < i)
        {
            if (tab[i] == tab[found] && i != found)
            {
            fd = tab[found] + '0';
            write(1,&fd,1);
            write(1," ",1);
            }
            found++;
        }
        
     i++;
    }
    
}