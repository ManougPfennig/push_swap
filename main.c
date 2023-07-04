/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:15:56 by marvin            #+#    #+#             */
/*   Updated: 2023/05/30 19:50:06 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "push_swap.h"

void	print_list(t_list **lst)
{
	t_list	*lister;
	int		lol;

	lister = NULL;
	if (lst)
		lister = lst[0];
	while (lst && lister->next != NULL)
	{
		lol = lister->content;
		printf("list ->%d\n", lol);
		lister = lister->next;
	}
	if (lst)
	{
		lol = lister->content;
		printf("list ->%d\n", lol);
	}
}

int	main(int ac, char **av)
{
	t_list	***piles;

	if (ac == 1)
		exit(EXIT_SUCCESS);
	piles = create_piles(av);
	print_list(piles[0]);
	pa(piles);
	printf("---\n");
	print_list(piles[0]);
	print_list(piles[1]);
	exit(EXIT_SUCCESS);
	return (0);
}