#include <unistd.h>

void print_line(int n)
{
    char b = '_';
    int i = 0 ;

    while ( i < n )
    {
        write(1,&b,1);
        i++;
    }
    write(1, "\n", 1);
}
