#include <unistd.h>

int main (void)
{
    int a = 0 ;
    int b ;

    while (a < 9)
    {
        b = a + 1;
        while (b <= 9)
        {
            write(1,&"0123456789"[a],1);
            write(1,&"0123456789"[b],1);

            if (!(a== 8 && b == 9))
            {
                write(1,", ",2);
            }
        b++;
        }
    a++;   
    }

    write(1,"\n",1);
    return 0 ;
}