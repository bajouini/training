#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
void	ft_putnbr(int nb)
{
	long nbr;

	nbr = (int)nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar('0' + nbr % 10);
}


int		main(void)
{
	int nb = 0;
	while (++nb <= 100)
	{
		if (nb % 3 == 0)
			ft_putstr("fizz");
		if (nb % 5 == 0)
			ft_putstr("buzz");
		if ((nb % 3 != 0) && (nb % 5 != 0))
			ft_putnbr(nb);
		ft_putchar('\n');
	}
	return (0);
}