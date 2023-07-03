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

void	print_list(t_list *lst)
{
	while (lst->next != NULL)
	{
		ft_printf("->%i\n", lst->content);
		lst->next = lst->next->next;
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
	return (0);
}