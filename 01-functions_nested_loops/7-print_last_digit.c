#include <unistd.h> 

int print_last_digit(int n)
{
    
  int digit ;
  digit = n % 10;

  if (digit < 0)
  {
    digit = -digit;
  }
  write(1,&"0123456789"[digit],1);

  return digit;
    
}