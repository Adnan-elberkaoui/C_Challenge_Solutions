#include <unistd.h>

void ft_print_range_reverse(int min, int max)
{
    while (max >= min)
    {
        char c = max + '0';
        write(1,&c,1);
        max--;
    }
    write(1,"\n",1);
}
