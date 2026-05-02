#include <unistd.h>

void ft_print_alphabet_x10(void)
{
    char a ;
    int i ;
    i = 0 ;
    while (i < 10)
    {
        a = 'a';
        while (a <= 'z')
        {
            write(1,&a,1);
            a++;
        }
      i++;
    }
    
}
