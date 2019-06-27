#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *tab;
    int len;

    len = (end >= start) ? end - start + 1 : start - end + 1;
    if (!(tab = (char *)malloc(sizeof(*tab)* len)))
        return (NULL);
    while (len--)
        tab[len] = (end >= start) ? start++ : start--;
    return (tab);
}