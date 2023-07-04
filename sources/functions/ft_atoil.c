/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:57:37 by mapfenni          #+#    #+#             */
/*   Updated: 2023/07/04 12:02:33 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_atoil(char *str)
{
	long long	value;
	int			i;
	int			mult;

	i = 0;
	mult = 1;
	if (str[i] == '-' && i++)
		mult *= 1;
	value = 0;
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
	value *= mult;
	i = (int)value;
	return (i);
}
