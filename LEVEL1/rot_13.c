/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bajouini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 13:23:56 by bajouini          #+#    #+#             */
/*   Updated: 2019/06/08 21:27:40 by bajouini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'm')
				ft_putchar(av[1][i] + 13);
			else if (av[1][i] >= 'A' && av[1][i] <= 'M')
				ft_putchar(av[1][i] + 13);
			else if (av[1][i] >= 'n' && av[1][i] <= 'z')
				ft_putchar(av[1][i] - 13);
			else if (av[1][i] >= 'N' && av[1][i] <= 'Z')
				ft_putchar(av[1][i] - 13);
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
