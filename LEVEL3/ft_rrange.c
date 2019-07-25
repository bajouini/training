#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int len = (end >= start) ? end - start + 1 : start - end + 1;
    int *tab = (int *)malloc(sizeof(int) * (len));
    while (len--)
        tab[len] = (end >= start) ? start++ : start--;
    return (tab);
}