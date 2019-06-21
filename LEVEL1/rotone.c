/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 13:14:03 by bajouini          #+#    #+#             */
/*   Updated: 2019/06/08 21:31:09 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			av[1][i] >= 'a' && av[1][i] <= 'y' ? av[1][i] += 1 : 0;
			av[1][i] >= 'A' && av[1][i] <= 'Y' ? av[1][i] += 1 : 0;
			av[1][i] == 'z' ? av[1][i] = 'a' : 0;
			av[1][i] == 'Z' ? av[1][i] = 'A' : 0;
			i++;
		}
		ft_putstr(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
