#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int     is_blank(char c)
{
    return (c <= 32);
}

int     ft_atoi(char *s)
{
    int i = 0;
    long res = 0;
    int sign;
    while (is_blank(s[i]))
        i++;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '-' || s[i] == '+')
        i++;
    while (s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10 + (s[i] - '0');
        i++;
    }
    return ((int)res * sign);
}

void	print_hex(int n)
{
	int c;

	if (n >= 16)
		print_hex(n / 16);
	c = n % 16 + (n % 16 < 10 ? '0' : 'a' - 10);
	ft_putchar(c);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi(av[1]));
    ft_putchar('\n');
    return (0);
}