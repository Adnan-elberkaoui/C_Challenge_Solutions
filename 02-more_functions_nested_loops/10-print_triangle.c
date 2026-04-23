#include <unistd.h>

void print_triangle(int size)
{
    int i = 0 ;
    int x ;
    char trg = '#';

    if (size <= 0)
    {
        write(1,"\n",1);
        return;
    }
    
    while (i < size)
    {
        x = 0 ;

        while (x < size - i - 1)
        {
            write(1," ",1);
            x++;
        }
        x = 0 ;

        while (x < i + 1)
        {
            write(1,&trg,1);
            x++;
        }

        write(1,"\n",1);
        i++;
    }
    
}
