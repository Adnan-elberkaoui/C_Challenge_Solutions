#include <unistd.h>

void ft_print_pairs_and_odds(void)
{
    int i ;
    int x ;
    i = 1 ;


        while (i <= 7)
    {
        x = i + 1 ;
        while (x <= 9)
        {
            if (!(i % 2 == 0 || x % 2 == 0))
            {
            char a = i + '0';
            char b = x + '0';

            write(1,&a,1);
            write(1,&b,1);

            if (!(i == 7 && x == 9))
            {
                write(1,", ",2);
            }
            
            }
            x++;
        }
      i++;
    }

}
