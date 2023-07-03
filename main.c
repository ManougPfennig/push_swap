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

	lister = lst[0];
	while (lister->next != NULL)
	{
		ft_printf("list ->%i\n", lister->content);
		lister = lister->next;
	}
}

int	main(int ac, char **av)
{
	t_list	**a;
	t_list	**b;

	if (ac == 1)
		exit(EXIT_SUCCESS);
	a = create_list(av);
	b = NULL;
	(void) ac;
	print_list(a);
	return (0);
}