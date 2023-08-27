/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_smallest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 02:56:19 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/27 20:50:05 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

long long	sml_v(t_list **pile)
{
	long long	value;
	t_list		*lister;

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

long long	big_v(t_list **pile)
{
	long long	value;
	t_list		*lister;

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
