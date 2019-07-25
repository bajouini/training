#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_blank(char c)
{
	return (c == ' ' || c == '\t');
}

int		to_lower(char c)
{
	return (c += (c >= 'A' && c <= 'Z') ? 32 : 0);
}

int		to_upper(char c)
{
	return (c -= (c >= 'a' && c <= 'z') ? 32 : 0);
}

void	str_capitaliser(char *s)
{
	while (*s)
	{
		while (is_blank(*s))
			ft_putchar(*s++);
		if (*s && !is_blank(*s))
			ft_putchar(to_upper(*s++));
		while (*s && !is_blank(*s))
			ft_putchar(to_lower(*s++));
	}
}

int		main(int ac, char **av)
{
	int i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			str_capitaliser(av[i++]);
			write(1, "\n", 1);
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}