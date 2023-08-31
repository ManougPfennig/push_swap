/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_to_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:33:29 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/31 16:42:47 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

long long	*bubble_sort(long long *tab, long long len)
{
	long long	temp;
	int			i;
	int			y;

	y = 0;
	while (y != len)
	{
		i = 0;
		while (i + 1 != len)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		y++;
	}
	return (tab);
}

void	change_to_index(t_list ***piles)
{
	t_list		*lister;
	long long	*tab;
	long long	i;

	lister = piles[0][0];
	tab = malloc(ft_lstsize(piles[0][0]) * sizeof(long long));
	i = 0;
	while (lister)
	{
		tab[i] = lister->content;
		lister = lister->next;
		i++;
	}
	tab = bubble_sort(tab, ft_lstsize(piles[0][0]));
	lister = piles[0][0];
	while (lister)
	{
		i = 0;
		while (lister->content != tab[i])
			i++;
		lister->content = i;
		lister = lister->next;
	}
	free(tab);
}
