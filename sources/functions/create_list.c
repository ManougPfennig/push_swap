/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:31:53 by mapfenni          #+#    #+#             */
/*   Updated: 2023/07/03 17:19:47 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	check_values(char **arg)
{
	int	i;
	int	y;

	i = 0;
	while (arg[i])
	{
		if (ft_strlen(arg[i]) > ft_strlen("-2147483648"))
			error_msg();
		y = 0;
		while (arg[i][y])
		{
			if (y == 0 && arg[i][y] == '-')
				y++;
			if (!(arg[i][y] >= '0' && arg[i][y] <= '9'))
				error_msg();
			y++;
		}
		i++;
	}
}

void	print_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("->%s\n", tab[i]);
		i++;
	}
}

t_list	**create_list(char **av)
{
	t_list	**lst_ptr;
	char	**arg_values;
	char	*arg_str;
	int		i;

	i = 1;
	lst_ptr = NULL;
	arg_str = NULL;
	while (av[i] != NULL)
	{
		arg_str = ft_strjoin(arg_str, av[i]);
		arg_str = ft_strjoin(arg_str, " ");
		i++;
	}
	arg_values = ft_split((const char *)arg_str, ' ');
	check_values(arg_values);
	i = 0;
	while (arg_values[i])
	{
		ft_lstadd_back(lst_ptr, ft_lstnew_int(ft_atoil(arg_values[i])));
		i++;
	}
	return (lst_ptr);
}