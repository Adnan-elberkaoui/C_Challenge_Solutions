#include <unistd.h>

void print_diagonal(int n)
{
    int i = 0 ;
    int x ;
    char space = ' ';
    
    if (n <= 0)
    {
        write(1,"\n",1);
        return;
    }
    
    while (i < n)
    {   
        x = 0 ;
        while (x < i)
        {
           write(1,&space,1);
           x++;
        }
        write(1,"\\",1);
        write(1,"\n",1);
        i++;
    }
   
}
