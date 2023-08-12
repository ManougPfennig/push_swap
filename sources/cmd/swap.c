/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:54:42 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/12 23:05:24 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sa(t_list ***lst)
{
	int	temp;

	if (!lst[0] || !lst[0][0])
		return ;
	if (ft_lstsize(lst[0][0]) == 1 || ft_lstsize(lst[0][0]) == 0)
		return ;
	temp = lst[0][0]->content;
	lst[0][0]->content = lst[0][0]->next->content;
	lst[0][0]->next->content = temp;
	return ;
}

void	sb(t_list ***lst)
{
	int	temp;

	if (!lst[1] || !lst[1][0])
		return ;
	if (ft_lstsize(lst[1][0]) == 1 || ft_lstsize(lst[1][0]) == 0)
		return ;
	temp = lst[1][0]->content;
	lst[1][0]->content = lst[1][0]->next->content;
	lst[1][0]->next->content = temp;
	return ;
}

void	ss(t_list ***lst)
{
	sa(lst);
	sb(lst);
	return ;
}
