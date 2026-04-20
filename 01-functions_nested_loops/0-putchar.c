#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

int main (void)
{
    ft_putchar('_');
    ft_putchar('p');
    ft_putchar('u');
    ft_putchar('t');
    ft_putchar('c');
    ft_putchar('h');
    ft_putchar('a');
    ft_putchar('r');
    ft_putchar('\n');

    return 0 ;
}
