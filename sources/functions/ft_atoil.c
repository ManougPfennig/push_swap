/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:57:37 by mapfenni          #+#    #+#             */
/*   Updated: 2023/07/03 17:21:14 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_atoil(char *str)
{
	long long	value;
	int			i;

	i = 0;
	if (str[i] == '-')
		i++;
	value = 0;
	while (str[i])
	{
		value = str[i] - '0';
		value *= 10;
		i++;
	}
	if (str[0] == '-')
		value *= -1;
	if (value > 2147483647 || value < -2147483648)
		error_msg();
	return ((int)value);
}
