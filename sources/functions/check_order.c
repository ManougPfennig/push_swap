/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:28:58 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/13 02:38:45 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_order(t_list ***piles)
{
	t_list	*lister;
	int		value;

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
