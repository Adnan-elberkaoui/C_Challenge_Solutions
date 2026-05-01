#include <unistd.h>

void ft_print_grid(int width, int height)
{
    int i ;
    int x ;
    i = 0 ;
    while (i < height)
    {
        x = 0;
        while (x < width)
        {
            if (i == 0 || i == height - 1 || x == 0 || x == width - 1)
          write(1, "#", 1);
          else
           write(1, " ", 1);
           x++;
        }
        write(1,"\n",1);
        i++;
    }
    
}
