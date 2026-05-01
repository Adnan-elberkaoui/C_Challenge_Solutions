#include <unistd.h>

void ft_print_triangle_right(int n)
{
    int i;
    int x ;
    int v ;
    char space = ' ';
    char trg = '*';

    i = 0 ;
    if (n > 0)
    {
        while (i < n)
        {
            x = 0 ;
            while (x < n - i - 1)
            {
              write(1,&space,1);
              x++;
            }
            v = 0 ;
            while (v < i + 1 )
            {
                write(1,&trg,1);
                
                v++;
            }
            write(1,"\n",1);

        i++;
        }
        
    }
    
}
