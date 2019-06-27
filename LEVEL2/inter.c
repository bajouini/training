#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_inter(char *s1, char *s2)
{
    char     tab[256];
    int     i = 0;

    while (s2[i])
    {
        if (tab[s2[i]] == 0)
            tab[s2[i]] = 1;
        i++;
    }
    i = 0;
    while (s1[i])
    {
        if (tab[s1[i]] == 1)
        {
            tab[s1[i]] = 2;
            ft_putchar(s1[i]);
        }
        i++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 3)
        ft_inter(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}