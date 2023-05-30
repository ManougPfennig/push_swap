/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argparsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:02:13 by marvin            #+#    #+#             */
/*   Updated: 2023/05/30 20:15:55 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../../push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi_usable(char	*str)
{
	int	i;

	i = 0;
	if(str[i] == '-')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	if (i > 11)
		return (0);
	if (i > 10 && str[i] != '-')
		return (0);
	return (1);
}

int

void	ft_argparsing(int ac, char **av, t_list **lst)
{
	int		i;
	double	value;

	if (ac == 1)
		return (1);
	i = 0;
	while (av[i] != NULL)
	{
		if (ft_atoi_usable(av[i]))
		{
			value = ft_atoidouble(av[i]);
			if (value > INT_MAX || value < INT_MIN)
				error_msg(1);
			ft_lstadd_back(lst, ft_lstnew(value));
		}
		else
			error_msg(1);
	}
}