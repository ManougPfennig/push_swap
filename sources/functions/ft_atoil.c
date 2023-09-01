/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:57:37 by mapfenni          #+#    #+#             */
/*   Updated: 2023/09/01 16:24:47 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

long long	ft_atoil(char *str)
{
	long long	value;
	int			i;

	i = 0;
	value = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		value *= 10;
		value += str[i] - '0';
		i++;
	}
	if (str[0] == '-')
		value *= -1;
	return ((value));
}
