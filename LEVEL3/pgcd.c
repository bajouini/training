#include <stdio.h>
#include <stdlib.h>

int pgcd(unsigned int nb, unsigned int nb2)
{
    int i = nb;
    while (i > 0)
    {
        if (nb % i == 0 && nb2 % i == 0)
            return (i);
        i--;
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 3)
        printf("%d", pgcd(atoi(av[1]), atoi(av[2])));
    printf("\n");
    return (0);
}