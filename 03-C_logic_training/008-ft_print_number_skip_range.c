#include <unistd.h>

void ft_print_number_skip_range(int min, int max)
{

      while (min <= max)
      {
        if (min >= 0 && min <= 9)
        {
        char n = min + '0';
        write(1,&n,1);
        }
        min = min +2 ;
      }

}
