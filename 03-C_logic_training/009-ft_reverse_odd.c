#include <unistd.h>

void ft_reverse_odd(void)
{
    int i = 9;
    while (i >= 0)
    {
        if (i % 2 != 0)
        {
            char n = i + '0';
            write(1,&n,1);
        }
        i--;
    }
    
}
