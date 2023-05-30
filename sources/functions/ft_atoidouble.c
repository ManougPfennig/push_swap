/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoidouble.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:01:32 by marvin            #+#    #+#             */
/*   Updated: 2023/05/30 19:47:27 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../../push_swap.h"

double	ft_atoidouble(const char *str)
{
	int		i;
	double	result;
	int		mult;

	i = 0;
	result = 0;
	mult = 1;
	while (ft_iswspace(str[i]))
		i++;
	if ((char)str[i] == '-')
	{
		if ((char)str[i] == '-')
			mult = -1;
		i++;
	}
	while ((char)str[i] && ((char)str[i] >= '0' && (char)str[i] <= '9'))
	{
		if (((char)str[i] >= '0' && (char)str[i] <= '9'))
		{
			result *= 10;
			result += ((char)str[i] - '0');
			i++;
		}
		else
			error_msg(1);
	}
	return (result * mult);
}
