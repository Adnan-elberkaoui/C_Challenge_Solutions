#include <unistd.h>

void ft_print_range_skip_even(int min, int max)
{
    while (min <= max)
    {
        if (min %2 != 0)
        {
            char c = min + '0';
            write(1,&c,1);
        }
        min++;
    }
}
int main (void)
{
    ft_print_range_skip_even(0,7);
    return 0;
}
