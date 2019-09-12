#include <unistd.h>

int		is_blank(char c)
{
	return (c == ' ' || c == '\t');
}

int		is_alpha(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		is_ALPHA(char c)
{
	return (c >= 'A' && c <= 'Z');
}

void	str_capitalizer(char *str)
{
	int i = 0;
	if (is_alpha(str[i]))
		str[i] -= 32;
	write (1, &str[i], 1);
	while (str[++i])
	{
		if (is_ALPHA(str[i]))
			str[i] += 32;
		if ((is_alpha(str[i])) && (is_blank(str[i - 1])))
			str[i] -= 32;
		write (1, &str[i], 1);
	}
}

int		main(int ac, char **av)
{
	int i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			str_capitalizer(av[i++]);
			write (1, "\n", 1);
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}