#include <stdlib.h>
#include <stdio.h>

int     main(int ac, char **av)
{
    int     div = 2;
    int     nb = atoi(av[1]);

    if (ac == 2)
    {
        if (nb == 1)
            printf("1");
        if (nb <= 1)
            return (0);
        while (div <= nb)
        {
        	if (nb % div == 0)
        	{
        		printf("%d", div);
                if (nb == div)
                {
                    printf("\n");
                    return (0);
                }
                printf("*");
        		nb /= div;
        		div = 1;
        	}
        	div++;
        }
    }
    printf("\n");
    return (0);
}