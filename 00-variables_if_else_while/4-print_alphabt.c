#include <unistd.h>

int main (void)
{
    char i ='a';

    while (i <= 'z')
    {
        if (i != 'e' && i != 'q')
        {
            write(1,&i,1);
        }
        i++;
    }
    write(1,"\n",1);
    return 0 ;
}