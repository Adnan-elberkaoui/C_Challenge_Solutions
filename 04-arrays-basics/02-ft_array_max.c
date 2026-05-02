int ft_array_max(int *arr, int size)
{
    int i;
    int max;

    if (size <= 0)
        return 0;

    i = 1;
    max = arr[0];

    while (i < size)
    {
        if (arr[i] > max)
            max = arr[i];
        i++;
    }
    return max;
}