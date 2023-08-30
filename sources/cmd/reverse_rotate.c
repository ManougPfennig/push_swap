/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:54:36 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/30 18:34:04 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rra(t_list ***lst)
{
	t_list		*ptr;
	long long	temp;
	long long	temp2;

	if (!lst[0][0] || ft_lstsize(lst[0][0]) <= 1)
		return ;
	ptr = lst[0][0];
	temp = ptr->content;
	temp2 = ptr->next->content;
	while (ptr->next)
	{
		ptr = ptr->next;
		ptr->content = temp;
		temp = temp2;
		if (ptr->next)
			temp2 = ptr->next->content;
	}
	lst[0][0]->content = temp;
	ft_printf("rra\n");
	return ;
}

void	rrb(t_list ***lst)
{
	t_list		*ptr;
	long long	temp;
	long long	temp2;

	if (!lst[1][0] || ft_lstsize(lst[1][0]) <= 1)
		return ;
	ptr = lst[1][0];
	temp = ptr->content;
	temp2 = ptr->next->content;
	while (ptr->next)
	{
		ptr = ptr->next;
		ptr->content = temp;
		temp = temp2;
		if (ptr->next)
			temp2 = ptr->next->content;
	}
	lst[1][0]->content = temp;
	ft_printf("rrb\n");
	return ;
}

void	rrrp2(t_list ***lst)
{
	t_list		*ptr;
	long long	temp;
	long long	temp2;

	ptr = lst[1][0];
	temp = ptr->content;
	temp2 = ptr->next->content;
	while (ptr->next)
	{
		ptr = ptr->next;
		ptr->content = temp;
		temp = temp2;
		if (ptr->next)
			temp2 = ptr->next->content;
	}
	lst[1][0]->content = temp;
}

void	rrr(t_list ***lst)
{
	t_list		*ptr;
	long long	temp;
	long long	temp2;

	if (lst[0][0] && ft_lstsize(lst[0][0]) > 1)
	{
		ptr = lst[0][0];
		temp = ptr->content;
		temp2 = ptr->next->content;
		while (ptr->next)
		{
			ptr = ptr->next;
			ptr->content = temp;
			temp = temp2;
			if (ptr->next)
				temp2 = ptr->next->content;
		}
		lst[0][0]->content = temp;
	}
	if (lst[1][0] && ft_lstsize(lst[1][0]) > 1)
	{
		rrrp2(lst);
	}
	ft_printf("rrr\n");
	return ;
}
