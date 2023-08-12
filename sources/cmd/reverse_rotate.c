/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:54:36 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/12 23:05:41 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rra(t_list ***lst)
{
	if (!lst[0][0] || ft_lstsize(lst[0][0]) <= 1)
		return ;
	ft_lstadd_front(lst[0], ft_lstnew_int(ft_lstlast(lst[0][0])->content));
	ft_lstdel_last(lst[0]);
	return ;
}

void	rrb(t_list ***lst)
{
	if (!lst[1][0] || ft_lstsize(lst[1][0]) <= 1)
		return ;
	ft_lstadd_front(lst[1], ft_lstnew_int(ft_lstlast(lst[1][0])->content));
	ft_lstdel_last(lst[1]);
	return ;
}

void	rrr(t_list ***lst)
{
	rra(lst);
	rrb(lst);
	return ;
}
