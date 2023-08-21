/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_smallest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 02:56:19 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/15 03:22:41 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	sml_v(t_list **pile)
{
	int		value;
	t_list	*lister;

	value = 0;
	lister = NULL;
	if (*pile)
		lister = *pile;
	if (lister)
		value = lister->content;
	while (lister != NULL)
	{
		if (lister->content < value)
			value = lister->content;
		lister = lister->next;
	}
	return (value);
}

int	big_v(t_list **pile)
{
	int		value;
	t_list	*lister;

	value = 0;
	lister = NULL;
	if (*pile)
	{
		lister = *pile;
		value = lister->content;
	}
	while (lister != NULL)
	{
		if (lister->content > value)
			value = lister->content;
		lister = lister->next;
	}
	return (value);
}
