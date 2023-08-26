/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:10:52 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/26 18:51:31 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	bits_max(t_list ***piles)
{
	int	max;
	int	big;

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

	i = 0;
	lister = piles[0][0];
	len = ft_lstsize(piles[0][0]);
	bit_max = bits_max(piles);
	while (i < bit_max || check_order(piles) == 0)
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
		while (ft_lstsize(piles[1][0]) != 0)
			pa(piles);
		i++;
	}
}
