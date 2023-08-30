/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:54:39 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/30 18:34:54 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ra(t_list ***lst)
{
	t_list		*ptr;
	long long	temp;

	if (!lst[0][0] || ft_lstsize(lst[0][0]) == 0 || ft_lstsize(lst[0][0]) == 1)
		return ;
	ptr = lst[0][0];
	temp = ptr->content;
	while (ptr->next)
	{
		ptr->content = ptr->next->content;
		ptr = ptr->next;
	}
	ptr->content = temp;
	ft_printf("ra\n");
	return ;
}

void	rb(t_list ***lst)
{
	t_list		*ptr;
	long long	temp;

	if (!lst[1][0] || ft_lstsize(lst[1][0]) == 0 || ft_lstsize(lst[1][0]) == 1)
		return ;
	ptr = lst[1][0];
	temp = ptr->content;
	while (ptr->next)
	{
		ptr->content = ptr->next->content;
		ptr = ptr->next;
	}
	ptr->content = temp;
	ft_printf("rb\n");
	return ;
}

void	rrp2(t_list ***lst)
{
	t_list		*ptr;
	long long	temp;

	ptr = lst[1][0];
	temp = ptr->content;
	while (ptr->next)
	{
		ptr->content = ptr->next->content;
		ptr = ptr->next;
	}
	ptr->content = temp;
}

void	rr(t_list ***lst)
{
	t_list		*ptr;
	long long	temp;

	if (lst[0][0] && ft_lstsize(lst[0][0]) > 1)
	{
		ptr = lst[0][0];
		temp = ptr->content;
		while (ptr->next)
		{
			ptr->content = ptr->next->content;
			ptr = ptr->next;
		}
		ptr->content = temp;
	}
	if (lst[1][0] && ft_lstsize(lst[1][0]) > 1)
	{
		rrp2(lst);
	}
	ft_printf("rr\n");
	return ;
}
