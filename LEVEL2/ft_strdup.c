#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *dup;
    int i = 0;

    while (src[i])
        i++;
    if (!(dup = (char*)malloc(sizeof(*dup) * (i + 1))))
        return (NULL);
    i = -1;
    while (src[++i] != '\0')
        dup[i] = src[i];
    dup[i] = '\0';
    return (dup);
}