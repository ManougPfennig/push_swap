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
	printf("---\n");
}

int	main(int ac, char **av)
{
	t_list	***piles;

	if (ac == 1)
		exit(EXIT_SUCCESS);
	piles = create_piles(av);
	if (check_order(piles))
		exit(EXIT_SUCCESS);
	if (ft_lstsize(piles[0][0]) <= 5)
		small_list(piles);
	exit(EXIT_SUCCESS);
	return (0);
}
