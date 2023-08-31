/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 22:49:24 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/12 22:49:24 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pre_check(char **av)
{
	int	i;
	int	y;

	y = 1;
	while (av[y])
	{
		i = 0;
		if (av[y][i] == '-')
			i++;
		while (av[y][i])
		{
			if ((av[y][i] > '9' || av[y][i] < '0') && av[y][i] != ' ' \
			&& av[y][i] != '-')
				error_msg(NULL, NULL);
			i++;
		}
		y++;
	}
	return (0);
}

void	small_list(t_list ***piles)
{
	if (ft_lstsize(piles[0][0]) == 2)
		ft_printf("ss\n");
	else if (ft_lstsize(piles[0][0]) == 3)
		size_three(piles);
	else
		four(piles);
}

int	main(int ac, char **av)
{
	t_list	***piles;

	if (ac == 1)
		exit(EXIT_SUCCESS);
	pre_check(av);
	piles = create_piles(av);
	if (check_order(piles))
	{
		free_piles(piles);
		exit(EXIT_SUCCESS);
	}
	else if (ft_lstsize(piles[0][0]) <= 5)
		small_list(piles);
	else
		radix(piles);
	free_piles(piles);
	exit(EXIT_SUCCESS);
	return (0);
}
