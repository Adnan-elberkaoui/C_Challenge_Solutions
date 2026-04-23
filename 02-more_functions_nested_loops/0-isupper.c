#include <unistd.h>

int _isupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1 ;
    }
    return 0;
}