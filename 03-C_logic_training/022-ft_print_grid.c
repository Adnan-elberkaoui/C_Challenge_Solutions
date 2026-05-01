#include <unistd.h>

void ft_print_grid(void)
{
    int i ;
    int x ;

    i = 0 ;
    while (i <= 2)
    {
        x = 0 ;

        while (x <= 2)
        {
            char a = i + '0';
            char b = x + '0';

            write(1,&a,1);
            write(1,&b,1);
             if (x != 2)
             {
             write(1, " ", 1);
             }
            x++;
        }
        write(1,"\n",1);
     i++;
    }
    
}
