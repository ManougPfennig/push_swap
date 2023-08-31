/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_piles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:15:59 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/30 19:48:11 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_list	***create_piles(char **av)
{
	t_list	***piles;
	t_list	**a;
	t_list	**b;

	a = NULL;
	b = NULL;
	piles = NULL;
	a = create_list(av);
	b = malloc(1 * sizeof(t_list **));
	b[0] = NULL;
	piles = malloc(2 * sizeof(t_list **));
	if (!piles)
	{
		free(b);
		error_msg(NULL, NULL);
	}
	piles[0] = a;
	piles[1] = b;
	return (piles);
}
