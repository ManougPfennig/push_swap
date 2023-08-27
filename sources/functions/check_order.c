/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:28:58 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/27 21:01:29 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_order(t_list ***piles)
{
	t_list		*lister;
	long long	value;

	lister = piles[0][0];
	while (lister->next != NULL)
	{
		value = lister->content;
		if (lister->next->content < value)
			return (0);
		lister = lister->next;
	}
	return (1);
}

void	fix_order(t_list ***piles)
{
	t_list	*lister;
	int		move;

	lister = piles[0][0];
	move = 0;
	while (lister->content != sml_v(piles[0]))
	{
		lister = lister->next;
		move++;
	}
	if (move > 2)
		while (check_order(piles) == 0)
			rra(piles);
	else
		while (check_order(piles) == 0)
			ra(piles);
}
