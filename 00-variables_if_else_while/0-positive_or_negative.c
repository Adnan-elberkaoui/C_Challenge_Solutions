#include <stdio.h>

int main (void)
{
    int i = 0 ;

    printf("entre your number :  ");
    scanf("%d",&i);

    if (i > 0 )
    {
        printf("its positive\n");
    }
    else if (i < 0)
    {
        printf("its negative\n");
    }
    else 
    {
        printf(" zero\n ");
    }

    return 0;
    
}
