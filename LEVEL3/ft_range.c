#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int	len = (end >= start) ? end - start : start - end;
	int	*tab = (int *)malloc(sizeof(int) * (len));
	while (end != start)
		*tab++ = end > start ? start++ : start--;
	*tab = start;
	return (tab - len);
}