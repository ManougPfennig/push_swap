/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:10:52 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/29 18:32:11 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	move_back(t_list ***piles)
{
	while (ft_lstsize(piles[1][0]) != 0)
		pa(piles);
	return (1);
}

int	bits_max(t_list ***piles)
{
	int			max;
	long long	big;

	big = big_v(piles[0]);
	max = 0;
	while (big >> max != 0)
		max++;
	return (max);
}

void	radix(t_list ***piles)
{
	t_list	*lister;
	int		len;
	int		bit_max;
	int		i;
	int		j;

	change_to_index(piles);
	i = 0;
	lister = piles[0][0];
	len = ft_lstsize(piles[0][0]);
	bit_max = bits_max(piles);
	while (i < bit_max)
	{
		j = 0;
		while (j++ < len)
		{
			lister = piles[0][0];
			if (((lister->content >> i) & 1) == 1)
				ra(piles);
			else
				pb(piles);
		}
		i = i + move_back(piles);
	}
}
