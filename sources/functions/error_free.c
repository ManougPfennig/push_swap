/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:20:39 by marvin            #+#    #+#             */
/*   Updated: 2023/05/30 19:52:35 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../../push_swap.h"

void	error_msg()
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	ft_free(char *str, char **tab)
{
	int	i;

	i = 0;
	if (str)
		free(str);
	while (tab && tab[i])
	{
		free(tab[i]);
		i++;
	}
	if (tab)
		free(tab);
	return ;
}
