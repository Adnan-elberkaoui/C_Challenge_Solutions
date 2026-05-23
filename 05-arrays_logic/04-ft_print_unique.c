#include <unistd.h>

void ft_print_unique(int *tab, int size)
{
    int i = 0;
    int j;
    int count;
    char c;

    while (i < size)
    {
        count = 0;
        j = 0;

        while (j < size)
        {
            if (tab[i] == tab[j])
                count++;
            j++;
        }

        if (count == 1)
        {
            c = tab[i] + '0';
            write(1, &c, 1);
        }

        i++;
    }
}