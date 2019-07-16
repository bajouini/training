#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    last_word(char *str)
{
    int     i = -1;
    int     j;

    while (str[++i])
    {
        if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] >= 33 && str[i + 1] <= 127)
            j = i + 1;
    }
    while (str[j] >= 33 && str[j] <= 127)
        ft_putchar(str[j++]);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);
    ft_putchar('\n');
    return (0);
}