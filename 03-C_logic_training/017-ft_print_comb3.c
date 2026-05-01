#include <unistd.h>

void ft_print_comb3(void)
{
    int a ;
    int b ;
    int c ;
    a = 0;
    while (a <= 7)
    {
        b = a + 1 ;
        while (b <= 8)
        {
            c = b + 1;
            while (c <= 9)
            {
                char aa = a + '0';
                char bb = b + '0';
                char cc = c + '0';
                write(1,&aa,1);
                write(1,&bb,1);
                write(1,&cc,1);
                if (!(a == 7 && b == 8 && c == 9))
                {
                    write(1,", ",2);
                }

              c++;
            }
           b++; 
        }
      a++;  
    }
    
}
