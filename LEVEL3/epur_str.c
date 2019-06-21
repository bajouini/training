#include <unistd.h>

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
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				sp = 1;
			if (!(av[1][i] == ' ' || av[1][i] == '\t'))
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