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

void	print_list(t_list ***piles)
{
	t_list	*alist;
	t_list	*blist;

	alist = NULL;
	blist = NULL;
	if (piles[0][0])
		alist = piles[0][0];
	if (piles[1][0])
		blist = piles[1][0];
	while (alist != NULL || blist != NULL)
	{
		if (alist != NULL)
		{
			printf("%lli	", alist->content);
			alist = alist->next;
		}
		if (blist != NULL)
		{
			printf("%lli	", blist->content);
			blist = blist->next;
		}
		printf("\n");
	}
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
