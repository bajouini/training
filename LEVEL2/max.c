#include <stdio.h>

int     max(int *tab, unsigned int len)
{
    int             max = tab[0];
    unsigned int    i = -1;

    while (++i < len)
        if (max < tab[i])
            max = tab[i];
    if (i == len)
        return (max);
    return (0);
}