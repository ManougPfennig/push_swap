/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:52:20 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/27 17:39:10 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_list	*ft_lstnew_int(int content, int init)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (init == 2)
		new->neg = 1;
	if (init == -1)
		new->neg = -1;
	if (init == 1)
		new->neg = 1;
	if (content < 0)
	{
		new->neg = -1;
		content *= -1;
	}
	new->content = content;
	new->next = NULL;
	return (new);
}
