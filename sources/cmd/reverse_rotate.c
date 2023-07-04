/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:54:36 by mapfenni          #+#    #+#             */
/*   Updated: 2023/07/04 17:50:22 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rra(t_list ***lst)
{
	if (!lst[0][0] || ft_lstsize(lst[0][0]) <= 1)
		return ;
	ft_lstadd_front(lst[0], ft_lstnew_int(ft_lstlast(lst[0][0])->content));
	lst[0][0] = lst[0][0]->next;
	return ;
}

void	rrb(t_list ***lst)
{
	if (!lst[1][0] || ft_lstsize(lst[1][0]) <= 1)
		return ;
	ft_lstadd_front(lst[0], ft_lstnew_int(ft_lstlast(lst[1][0])->content));
	lst[1][0] = lst[1][0]->next;
	return ;
}

void	rrr(t_list ***lst)
{
	rra(lst);
	rrb(lst);
	return ;
}