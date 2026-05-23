#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int tamp ;
    tamp = *a ;
    *a  =  *b ;
    *b  =  tamp ; 

}