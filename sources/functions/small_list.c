/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:19:24 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/21 18:21:21 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	size_three(t_list ***piles)
{
	t_list	*lister;

	lister = piles[0][0];
	if (lister->content > lister->next->content && \
	lister->next->content > lister->next->next->content)
	{
		ra(piles);
		sa(piles);
	}
	else if (lister->content > lister->next->next->content && \
	lister->next->content < lister->next->next->content)
		ra(piles);
	else if (lister->content < lister->next->content && \
	lister->next->next->content < lister->content)
		rra(piles);
	else if (lister->content < lister->next->next->content && \
	lister->content > lister->next->content)
		sa(piles);
	else if (lister->content < lister->next->next->content && \
	lister->next->next->content < lister->next->content)
	{
		sa(piles);
		ra(piles);
	}
}

void	five(t_list ***piles)
{
	int	move;

	move = 0;
	while (ft_lstsize(piles[1][0]) != 0)
	{
		if (piles[1][0] && ft_lstsize(piles[0][0]) == 4 && \
		piles[0][0]->content < piles[0][0]->next->content \
		&& piles[0][0]->next->content < piles[0][0]->next->next->content && \
		piles[0][0]->next->next->next->content < piles[0][0]->content && \
		piles[1][0]->content > big_v(piles[0]))
		{
			rra(piles);
			pa(piles);
			ra(piles);
		}
		if (piles[1][0] && piles[1][0]->content > big_v(piles[0]) && \
		piles[1][0]->content < big_v(piles[1]) && ft_lstsize(piles[1][0]) == 2 \
		&& check_order(piles) == 1)
		{
			pa(piles);
			ra(piles);
		}
		if (piles[1][0] && big_v(piles[0]) < piles[1][0]->content && \
		piles[0][0]->content == big_v(piles[0]))
		{
			pa(piles);
			if (ft_lstlast(piles[0][0])->content < piles[0][0]->content)
				sa(piles);
			move++;
		}
		if (piles[1][0] && ft_lstsize(piles[1][0]) > 1 && \
		piles[1][0]->next->content < piles[0][0]->content)
		{
			rb(piles);
			pa(piles);
			move++;
		}
		if (piles[1][0] && piles[1][0]->content < piles[0][0]->content)
		{
			pa(piles);
			move++;
		}
		if (piles[1][0] && check_order(piles) == 1 && \
		piles[1][0]->content > big_v(piles[0]) && ft_lstsize(piles[1][0]) == 1)
		{
			pa(piles);
			move++;
		}
		if (move == 0 && (check_order(piles) == 0 || ft_lstsize(piles[1][0])))
			ra(piles);
		move = 0;
	}
	fix_order(piles);
	exit(EXIT_SUCCESS);
}

void	four(t_list ***piles)
{
	pb(piles);
	if (ft_lstsize(piles[0][0]) == 4)
		pb(piles);
	size_three(piles);
	if (ft_lstsize(piles[1][0]) == 2)
		five(piles);
	if (piles[1][0]->content > big_v(piles[0]))
		pa(piles);
	else
	{
		while (piles[1][0]->content > piles[0][0]->content)
			ra(piles);
		pa(piles);
	}
	while (check_order(piles) == 0)
		ra(piles);
}

void	small_list(t_list ***piles)
{
	t_list	*lister;

	lister = piles[0][0];
	if (ft_lstsize(lister) == 2)
	{
		ft_printf("ss\n");
		exit(EXIT_SUCCESS);
	}
	if (ft_lstsize(lister) == 3)
	{
		size_three(piles);
		exit(EXIT_SUCCESS);
	}
	four(piles);
	exit(EXIT_SUCCESS);
}
