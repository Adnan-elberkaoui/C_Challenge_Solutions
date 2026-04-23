#include <unistd.h>

void more_numbers(void)

{
    int num ;
    int time ;
    time = 0;
    while (time < 10)
    {
        num = 0 ;

        while (num <= 14)
        {
            if (num < 10)
            {
                write(1,&"0123456789"[num],1);
            }
            else 
            {
                write(1,&"0123456789"[num / 10],1);
                write(1,&"0123456789"[num % 10],1);
            }
            if ( num == 14)
                {
                write(1,"\n",1);
                }
        num++; 
        }
    time++;   
    }

}