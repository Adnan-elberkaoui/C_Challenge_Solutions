#include <unistd.h>

void ft_print_grid_skip(int width, int height)
{
    int i ;
    int x ;
    i = 0 ;
    while (i < height)
    {
        x = 1;
        if (i % 2 == 0)
        {
            while (x <= width)
        {
            if ( x % 2 != 0)
            {
                write(1,"#",1);
            }
            else 
            {
                write(1," ",1);
            }
            x++;
        }
        }
        else if (i % 2 != 0)
        {
            while (x <= width)
        {
            if ( x % 2 != 0)
            {
                write(1," ",1);
            }
            else 
            {
                write(1,"#",1);
            }
            x++;
        }
        }
        write(1,"\n",1);
       i++;
    }
    
}

int main (void)
{
    ft_print_grid_skip(5 , 4);
    return 0 ;
}