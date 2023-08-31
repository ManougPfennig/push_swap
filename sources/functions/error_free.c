/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:06:58 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/12 23:06:58 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	error_msg(char *str, char **tab)
{
	ft_free(str, tab);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	ft_free(char *str, char **tab)
{
	int	i;

	i = 0;
	if (str)
		free(str);
	while (tab && tab[i])
	{
		free(tab[i]);
		i++;
	}
	if (tab)
		free(tab);
	return ;
}

void	free_piles(t_list ***piles)
{
	t_list	*lister;
	t_list	*to_free;

	lister = piles[0][0];
	while (lister)
	{
		to_free = lister;
		lister = lister->next;
		free(to_free);
	}
	lister = piles[1][0];
	while (lister)
	{
		to_free = lister;
		lister = lister->next;
		free(to_free);
	}
	if (piles[0])
		free(piles[0]);
	if (piles[1])
		free(piles[1]);
	if (piles)
		free(piles);
}
