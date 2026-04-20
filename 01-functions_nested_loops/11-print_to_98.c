#include <unistd.h>


void print_number(int n)
{
    long rc = n ;
    if (rc < 0 )
    {
    write(1,"-",1);
    rc = - rc ;
    }
    if (rc >= 10)
    {
        print_number(rc / 10);
    }    
     write(1,&"0123456789"[rc % 10],1);
}

void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            print_number(n);

            if (n != 98)
            {
                write(1,", ",2);
            }
            else
            {
                write(1,"\n",1);
            }

        n++;
        }

    }
    else if (n > 98)
    {
        while (n > 98)
        {
            print_number(n);

            if (n != 98)
            {
                write(1,", ",2);
            }
            else
            {
                write(1,"\n",1);
            }

        n--;
        }

    }
}
