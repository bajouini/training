#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_repeat_letter(char lettre)
{
	int i;
	int repeat;

	i = 0;
	if (lettre >= 'a' && lettre <= 'z')
		repeat = lettre - 'a' + 1;
	else if (lettre >= 'A' && lettre <= 'Z')
		repeat = lettre - 'A' + 1;
	else
		repeat = 1;
	while (i < repeat)
	{
		ft_putchar(lettre);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			ft_repeat_letter(av[1][i++]);
	}
	ft_putchar('\n');
	return (0);
}