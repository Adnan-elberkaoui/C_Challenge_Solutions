#include <unistd.h>

void ft_print_numbers_x10(void)
{
    int i ;
    char a;
    i = 0 ;

    while (i < 10)
    {
        a = '0';
        while (a <= '9')
        {
            write(1,&a,1);
            a++;
        }
      i++;
    }
    
}