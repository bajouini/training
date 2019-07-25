int is_blank(char c)
{
    return (c < 32);
}

int is_valid(char c, int base)
{
    char digits[17] = "0123456789abcdef";
    char digits2[17] = "0123456789ABCDEF";
    while (base--)
        if (digits[base] == c || digits2[base] == c)
            return (1);
    return (0);
}

int value_of(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    else if (c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    else if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign;
    int i = 0;
    while (is_blank(str[i]))
        i++;
    sign = (str[i] == '-') ? -1 : 1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (is_valid(str[i], str_base))
        res = res * str_base + value_of(str[i++]);
    return (res * sign);
}

int		main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	printf("%d\n", ft_atoi_base(av[1], atoi(av[2])));
}