#include <unistd.h>

int main(void)
{
    int hour;
    int min;

    hour = 0;
    while (hour <= 23)
    {
        min = 0;
        while (min <= 59)
        {
            write(1, &"0123456789"[hour / 10], 1);
            write(1, &"0123456789"[hour % 10], 1);
            write(1, ":", 1);
            write(1, &"0123456789"[min / 10], 1);
            write(1, &"0123456789"[min % 10], 1);
            write(1, "\n", 1);

            min++;
        }
        hour++;
    }
    return 0;
}