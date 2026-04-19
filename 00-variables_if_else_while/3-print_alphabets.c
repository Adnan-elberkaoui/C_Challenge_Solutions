#include <unistd.h>

int main (void)
{
    char i = 'a';

    while (i <= 'z')
    {
        write(1,&i,1);
        i++;
    }

    i = 'A';

    while (i <= 'Z')
    {
        write(1,&i,1);
        i++;
    }
    write(1,"\n",1);

    return 0 ; 
}