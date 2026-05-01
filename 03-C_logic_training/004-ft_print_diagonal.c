#include <unistd.h>

void ft_print_diagonal(int n)
{
    int i = 0 ;
    int x ;

    if (n > 0)
    {
        while (i < n)
        {
            x = 0;
            while (x < i)
            {
                write(1," ",1);
                x++;
            }
            write(1,"\\",1);
            write(1,"\n",1);  
            i++; 
        }
      
     
    }
    else if (n <= 0)
    {
        write(1,"\n",1);
    }

}

int main (void)
{
    ft_print_diagonal(7);
    return 0 ;
}