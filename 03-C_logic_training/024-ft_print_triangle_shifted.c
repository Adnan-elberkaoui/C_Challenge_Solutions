#include <unistd.h>

void ft_print_triangle_shifted(int n)
{
    int i ;
    int x ;
    int v = 0;
    i = 0 ;
    while (i < n)
    {
        x = 0 ;
        while (x < n - i - 1)
        {
            write(1," ",1);
            x++;
        }
        v = 0 ;
        while (v < i + 1)
        {
            write(1,"*",1);
            v++;
        }

        write (1,"\n",1);
        i++;
    }
    
}
