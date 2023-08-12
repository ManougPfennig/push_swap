/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 22:47:09 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/12 22:56:12 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_lstdel_last(t_list **lst)
{
	t_list	*lister;

	if (lst)
		lister = lst[0];
	while (lister->next->next != NULL)
		lister = lister->next;
	lister->next = NULL;
}
