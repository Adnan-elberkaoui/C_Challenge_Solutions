#include <unistd.h>
#include <stdio.h>

void print_alphabet_x10(void)
{
    char i ;
    int x = 0;
    

    while (x < 10)
    {
        i = 'a';
           while (i <= 'z')
            {
             write(1,&i,1);
             i++;
            }
     x++;
    

    }
}    

int main (void)
{
    print_alphabet_x10();
    return 0 ;
}