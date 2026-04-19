#include <unistd.h>

int main (void)
{
    char i = 'z';

    while (i >= 'a')
    {
        write(1,&i,1);
        i--;
    }
    write(1,"\n",1); 
    return 0 ;
}