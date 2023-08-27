/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:54:33 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/27 20:54:06 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	pa(t_list ***lst)
{
	if (!lst[0] || !lst[1] || !lst[1][0] || ft_lstsize(lst[1][0]) == 0)
		return ;
	ft_lstadd_front(lst[0], ft_lstnew_int(lst[1][0]->content));
	lst[1][0] = lst[1][0]->next;
	ft_printf("pa\n");
}

void	pb(t_list ***lst)
{
	if (!lst[0] || !lst[0][0] || ft_lstsize(lst[0][0]) == 0)
		return ;
	ft_lstadd_front(lst[1], ft_lstnew_int(lst[0][0]->content));
	lst[0][0] = lst[0][0]->next;
	ft_printf("pb\n");
}
