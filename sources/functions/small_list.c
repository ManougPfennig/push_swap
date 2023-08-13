/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:19:24 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/13 03:37:20 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	size_three(t_list ***piles)
{
	t_list	*lister;

	lister = piles[0][0];
	if (lister->content > lister->next->content && \
	lister->next->content > lister->next->next->content)
		ft_printf("ra\nsa\n");
	else if (lister->content > lister->next->next->content && \
	lister->next->content < lister->next->next->content)
		ft_printf("ra\n");
	else if (lister->content < lister->next->content && \
	lister->next->next->content < lister->content)
		ft_printf("rra\n");
	else if (lister->content < lister->next->next->content && \
	lister->content > lister->next->content)
		ft_printf("sa\n");
	else if (lister->content < lister->next->next->content && \
	lister->next->next->content < lister->next->content)
		ft_printf("sa\nra\n");
}

void	small_list(t_list ***piles)
{
	t_list	*lister;

	lister = piles[0][0];
	if (ft_lstsize(lister) == 2)
	{
		ra(piles);
		ft_printf("ra\n");
		exit(EXIT_SUCCESS);
	}
	if (ft_lstsize(lister) == 3)
	{
		size_three(piles);
		exit(EXIT_SUCCESS);
	}
}
