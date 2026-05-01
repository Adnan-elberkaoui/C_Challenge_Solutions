#include <unistd.h>

void ft_print_numbers_skip(void)
{
   char a ;
   a = '0';

   while (a <= '9')
   {
      if (a % 2 == 0)
      {
        write(1,&a,1);
      }
      a++;
   }
   
}