#include <unistd.h>

void times_table(void)
{
    int i = 0;
    int b;
    int result;

    while (i <= 9)
    {
        b = 0;
        while (b <= 9)
        {
            result = i * b;

            if (result >= 10)
            {
                write(1, &"0123456789"[result / 10], 1);
                write(1, &"0123456789"[result % 10], 1);
            }
            else
            {
                write(1, &"0123456789"[result], 1);
            }

            if (b != 9)
                write(1, ", ", 2);
            else
                write(1, "\n", 1);

            b++;
        }
        i++;
    }
}