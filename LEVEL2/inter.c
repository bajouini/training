#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int     inter(char *str, char c, int len)
{
    int i = 0;
    
    while (str[i] && (i < len || len == -1))
        if (str[i++] == c)
            return (1);
    return (0);
}

int     main(int ac, char *av[])
{
    int i = -1;
    
    if (ac == 3)
    {
        while(av[1][++i])
            if (!inter(av[1], av[1][i], i) && inter(av[2], av[1][i], -1))
                ft_putchar(av[1][i]);
    }
    ft_putchar('\n');
    return (0);
}