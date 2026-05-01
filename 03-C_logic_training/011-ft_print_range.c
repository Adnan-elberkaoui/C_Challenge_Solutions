#include <unistd.h>

void ft_print_range(int min, int max)
{
    while (min <= max)
    {
        char c = min + '0';
        write(1,&c,1);
        min ++;
    }
    write(1,"\n",1);
}
int main (void)
{
    ft_print_range(4,9);
    return 0 ;
}