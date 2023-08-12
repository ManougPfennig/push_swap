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

void	print_list(t_list **lst, char chain)
{
	t_list	*lister;
	int		value;

	lister = NULL;
	value = 0;
	if (lst)
		lister = lst[0];
	while (lister != NULL)
	{
		value = lister->content;
		printf("%clist-> %i\n", chain, value);
		lister = lister->next;
	}
}

int	main(int ac, char **av)
{
	t_list	***piles;

	if (ac == 1)
		exit(EXIT_SUCCESS);
	piles = create_piles(av);
	pb(piles);
	pb(piles);
	printf("---\n");
	print_list(piles[0], 'a');
	printf("---\n");
	print_list(piles[1], 'b');
	rrr(piles);
	printf("---\n");
	print_list(piles[0], 'a');
	printf("---\n");
	print_list(piles[1], 'b');
	printf("---\n");
	exit(EXIT_SUCCESS);
	return (0);
}
