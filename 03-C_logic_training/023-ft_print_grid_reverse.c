#include <unistd.h>

void ft_print_grid_reverse(void)
{
    int i ;
    int x ;

    i = 2 ; 

    while (i >= 0)
    {
        x = 2 ;
        while (x >= 0)
        {
            char a = i + '0';
            char b = x + '0';

            write(1,&a,1);
            write(1,&b,1);
             if (x != 0)
             {
             write(1, " ", 1);
             }
            x--;
        }
        write(1,"\n",1);
      i--;
        
    }
    
}
