/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:54:39 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/14 16:09:56 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ra(t_list ***lst)
{
	if (!lst[0][0] || ft_lstsize(lst[0][0]) == 0 || ft_lstsize(lst[0][0]) == 1)
		return ;
	ft_lstadd_back(lst[0], ft_lstnew_int(lst[0][0]->content));
	lst[0][0] = lst[0][0]->next;
	ft_printf("ra\n");
	return ;
}

void	rb(t_list ***lst)
{
	if (!lst[1][0] || ft_lstsize(lst[1][0]) == 0 || ft_lstsize(lst[1][0]) == 1)
		return ;
	ft_lstadd_back(lst[1], ft_lstnew_int(lst[1][0]->content));
	lst[1][0] = lst[1][0]->next;
	ft_printf("rb\n");
	return ;
}

void	rr(t_list ***lst)
{
	if (lst[0][0] && ft_lstsize(lst[0][0]) > 1)
	{
		ft_lstadd_back(lst[0], ft_lstnew_int(lst[0][0]->content));
		lst[0][0] = lst[0][0]->next;
	}
	if (lst[1][0] && ft_lstsize(lst[1][0]) > 1)
	{
		ft_lstadd_back(lst[1], ft_lstnew_int(lst[1][0]->content));
		lst[1][0] = lst[1][0]->next;
	}
	ft_printf("rr\n");
	return ;
}
