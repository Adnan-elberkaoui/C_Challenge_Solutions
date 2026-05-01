#include <unistd.h>

void ft_print_inverted_triangle(int n)
{
    int i = 0 ;
    int x;

    if (n > 0)
    {

        while ( i < n)
        {
            x = 0;
            while (x < n - i)
            {
                write(1,"*",1);
                x++;
            }
            write(1,"\n",1);
         i++;
        }
    
    }
    else 
    {
        write(1,"\n",1);
    }

}
