#include <stdio.h>

int main(void)
{
    long long n = 612852475143;
    long long divisor = 2;
    long long prime = 0;

    while (divisor <= n)
    {
        if (n % divisor == 0)
        {
            while (n % divisor == 0) 
            {
                n = n / divisor;
                prime = divisor;
            }
        }
     divisor++;  
    }
    if (n > 1)
        {
            prime = n;
        }
    
    printf("%lld\n", prime);
    return 0;

}