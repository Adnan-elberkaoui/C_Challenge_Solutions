#include <unistd.h>

void ft_print_pattern(int n)
{
    int i ;
    int x ;
    i = 1;
    if (n > 0)
    {
        while (i <= n)
        {
            x = 1;
            while (x <= i)
            {
                char c = x +'0';
                write(1,&c,1);
                x++;
            }
            write(1,"\n",1);
           i++; 
        }
        
    }
    
}
int main (void)
{
    ft_print_pattern(5);
    return 0 ;
}