#include <unistd.h>
void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putstr(char *s)
{
    while (*s)
        ft_putchar(*s++);
}

int     main(int ac, char **av)
{
    if (ac > 1)
        ft_putstr(av[1]);
    ft_putchar('\n');
    return (0);
}