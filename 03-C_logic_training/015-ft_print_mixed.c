#include <unistd.h>

void ft_print_mixed(int n)
{
    int i ;
    i = 1 ;
    while (i <= n)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            write(1,"FB",2);
        }
        else if (i % 3 == 0)
        {
            write(1,"F",1);
        }
        else if (i % 5 == 0)
        {
            write(1,"B",1);
        }
        else
        {
            char c = i + '0';
            write(1,&c,1);
        }
       i++; 
    }
    
}