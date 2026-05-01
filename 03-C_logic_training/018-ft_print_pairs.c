#include <unistd.h>

void ft_print_pairs(void)
{
    int a ;
    int b ;
    a = 0 ;
    while (a <= 8)
    {
        b = a + 1 ;
        while (b <= 9)
        {
            char aa = a + '0';
            char bb = b + '0';
            write(1,&aa,1);
            write(1,&bb,1);
            if (!(a == 8 && b == 9))
            {
                 write(1,", ",2);
            }
            
            b++;
        }
        a++;
    }

}
