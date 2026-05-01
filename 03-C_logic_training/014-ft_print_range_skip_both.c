#include <unistd.h>

void ft_print_range_skip_both(int min, int max)
{
    while (min <= max)
    {
       if (min %2 != 0 && min % 3 != 0)
       {
          char c = min + '0';
          write(1,&c,1);
       }
       min++;
    }
    
}