#include <unistd.h>

void ft_print_triangle_full(int n)
{
    int i ;
    int x ;
    int v ;
    int c ;
    
    i = 0 ;
    while (i < n)
    {
        x = 0 ;

        while (x < n - i - 1)
        {
            write(1," ",1);
            x++;
        }
        v = 0 ;
        while (v < ( 2 * i + 1 ))
        {
            write(1,"*",1);
            v++;
        }
        
        write(1,"\n",1);
      i++;
    }
    
}
int main (void)
{
    ft_print_triangle_full(5);
    return 0 ;
}