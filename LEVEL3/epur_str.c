#include <unistd.h>

int		is_blank(char c)
{
	return (c == ' ' || c == '\t');
}

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int		main(int ac, char const **av)
{
    int     i = 0;
	int		sp;
	if (ac == 2)
	{
		while (is_blank(av[1][i]))
			i++;
		while (av[1][i])
		{
			if (is_blank(av[1][i]))
				sp = 1;
			if (!is_blank(av[1][i]))
			{
				if (sp)
					ft_putchar(' ');
				sp = 0;
				ft_putchar(av[1][i]);
			}
            i++;
		}
	}
	ft_putchar('\n');
	return (0);
}