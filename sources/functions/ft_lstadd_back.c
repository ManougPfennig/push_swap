/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:32:47 by mapfenni          #+#    #+#             */
/*   Updated: 2023/05/30 19:51:02 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../../push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lister;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	lister = (*lst);
	while (lister->next != NULL)
		lister = lister->next;
	lister->next = new;
}
