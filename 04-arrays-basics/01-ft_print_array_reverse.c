#include <unistd.h>

void ft_print_array_reverse(int *arr, int size)
{
    int i = size - 1;

    while (i >= 0)
    {
        char ib = arr[i] + '0';
        write(1,&ib,1);
        i--;
        if (i >= 0)
        {
            write(1," ",1);
        }
        

    }
    
}
