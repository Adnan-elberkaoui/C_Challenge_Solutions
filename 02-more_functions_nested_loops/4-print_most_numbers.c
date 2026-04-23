#include <unistd.h>

void ft_putchar(char c)
{
   write(1,&c,1);
}

void print_most_numbers(void)
{
    char c;
    c = '0' ;
    while (c <= '9')
    {
        if (c != '2' && c != '4')
        {
            ft_putchar(c);
        }
        c++;
    }

    ft_putchar('\n');
}