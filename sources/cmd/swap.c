/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:54:42 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/28 00:24:46 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sa(t_list ***lst)
{
	long long	temp;

	if (lst[0][0] && ft_lstsize(lst[0][0]) > 1)
	{
		temp = lst[0][0]->content;
		lst[0][0]->content = lst[0][0]->next->content;
		lst[0][0]->next->content = temp;
	}
	ft_printf("sa\n");
	return ;
}

void	sb(t_list ***lst)
{
	long long	temp;

	if (lst[1][0] && ft_lstsize(lst[1][0]) > 1)
	{
		temp = lst[1][0]->content;
		lst[1][0]->content = lst[1][0]->next->content;
		lst[1][0]->next->content = temp;
	}
	ft_printf("sb\n");
	return ;
}

void	ss(t_list ***lst)
{
	long long	temp;

	if (lst[0][0] && ft_lstsize(lst[0][0]) > 1)
	{
		temp = lst[0][0]->content;
		lst[0][0]->content = lst[0][0]->next->content;
		lst[0][0]->next->content = temp;
	}
	if (lst[1][0] && ft_lstsize(lst[1][0]) > 1)
	{
		temp = lst[1][0]->content;
		lst[1][0]->content = lst[1][0]->next->content;
		lst[1][0]->next->content = temp;
	}
	ft_printf("ss\n");
	return ;
}
