#include <unistd.h>

int main (void)
{
    char i = '0';

    while (i <= '9')
    {
        write(1,&i,1);
        i++;
    }
    write(1,"\n",1);
    return 0 ;
}