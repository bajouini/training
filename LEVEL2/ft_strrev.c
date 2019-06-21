#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int	tmp;

	i = -1;
	j = 0;
	while (str[++i]);
	while (i > j)
	{
		i--;
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j++;
	}
	return (str);
}

int		main()
{
	char str[] = "salut";
	printf("%s\n", ft_strrev(str));
    return (0);
}