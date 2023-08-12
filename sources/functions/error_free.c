/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:06:58 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/12 23:06:58 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	error_msg(void)
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
