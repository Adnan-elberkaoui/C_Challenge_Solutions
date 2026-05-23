#include <unistd.h>

void ft_print_array(int *arr, int size)
{
    int i = 0 ;
    while (i < size)
    {
        char ib = arr[i] + '0';
        write(1,&ib,1);
        i++;

          if (i < size )
            write(1, " ", 1);

    }
    write(1,"\n",1);
  
}
