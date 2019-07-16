#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		len;
	int		*tab;

	len = max >= min ? max - min : min - max;
	if (!(tab = (int *)malloc(sizeof(int) * (len))))
		return (NULL);
	while (max != min)
		*tab++ = max > min ? min++ : min--;
	*tab = min;
	return (tab - len);
}