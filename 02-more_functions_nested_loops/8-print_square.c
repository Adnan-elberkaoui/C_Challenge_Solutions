#include <unistd.h>

void print_square(int size)
{
    int i = 0;
    int x;
    char square = '#';

    if (size <= 0)
    {
        write(1, "\n", 1);
        return;
    }

    while (i < size)
    {
        x = 0;
        while (x < size)
        {
            write(1, &square, 1);
            x++;
        }
        write(1, "\n", 1);
        i++;
    }
}