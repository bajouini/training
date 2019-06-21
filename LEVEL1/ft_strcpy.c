#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (dest[i])
		i++;
	if (dest < src)
		abort ();
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char *dest;
	char src[] = "awwdwwdasdadwdasdawdasdawdasdawdwasdadsdaw";
	printf("%s\n", ft_strcpy(dest, src));
	return (0);
}