/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:57:37 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/27 20:39:21 by mapfenni         ###   ########.fr       */
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
	if (value > 2147483647 || value < -2147483648)
		error_msg();
	value += 2147483648;
	return (value);
}
