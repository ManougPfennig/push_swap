/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:54:36 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/27 18:43:55 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rra(t_list ***lst)
{
	if (!lst[0][0] || ft_lstsize(lst[0][0]) <= 1)
		return ;
	ft_lstadd_front(lst[0], ft_lstnew_int(ft_lstlast(lst[0][0])->content));
	ft_lstdel_last(lst[0]);
	ft_printf("rra\n");
	return ;
}

void	rrb(t_list ***lst)
{
	if (!lst[1][0] || ft_lstsize(lst[1][0]) <= 1)
		return ;
	ft_lstadd_front(lst[1], ft_lstnew_int(ft_lstlast(lst[1][0])->content));
	ft_lstdel_last(lst[1]);
	ft_printf("rrb\n");
	return ;
}

void	rrr(t_list ***lst)
{
	if (lst[0][0] && ft_lstsize(lst[0][0]) > 1)
	{
		ft_lstadd_front(lst[0], ft_lstnew_int(ft_lstlast(lst[0][0])->content));
		ft_lstdel_last(lst[0]);
	}
	if (lst[1][0] && ft_lstsize(lst[1][0]) > 1)
	{
		ft_lstadd_front(lst[1], ft_lstnew_int(ft_lstlast(lst[1][0])->content));
		ft_lstdel_last(lst[1]);
	}
	ft_printf("rrr\n");
	return ;
}
