/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:31:53 by mapfenni          #+#    #+#             */
/*   Updated: 2023/09/01 16:22:11 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab && tab[i])
		i++;
	return (i);
}

void	check_doubles(char *str, char **arg)
{
	int	i;
	int	y;

	i = 0;
	y = 1;
	while (arg[i])
	{
		while (arg[y])
		{
			if (ft_strncmp(arg[i], arg[y], ft_strlen("-2147483648")) == 0)
				error_msg(str, arg);
			y++;
		}
		i++;
		y = i + 1;
	}
}

void	check_values(char *str, char **arg)
{
	int	i;
	int	y;

	i = 0;
	while (arg[i])
	{
		if ((arg[i][1] == '0' && arg[i][0] == '-') || \
		(arg[i][0] == '0' && arg[i][1] != '\0'))
			error_msg(str, arg);
		if (ft_atoil(arg[i]) > 2147483647 || ft_atoil(arg[i]) < -2147483648)
			error_msg(str, arg);
		y = 0;
		while (arg[i][y])
		{
			if (y == 0 && arg[i][y] == '-')
				y++;
			if (!(arg[i][y] >= '0' && arg[i][y] <= '9'))
				error_msg(str, arg);
			y++;
		}
		i++;
	}
	check_doubles(str, arg);
}

t_list	**create_list(char **av)
{
	t_list	**lst;
	char	**arg_values;
	char	*arg_str;
	int		i;

	i = 0;
	arg_str = NULL;
	arg_values = NULL;
	while (av[++i] != NULL)
	{
		if (av[i][0] == '\0' || check_spaces(av[i]) == 0 || \
		(av[i][0] == '-' && av[i][1] == '0'))
			error_msg(arg_str, arg_values);
		arg_str = ft_strjoin_free(arg_str, av[i]);
		arg_str = ft_strjoin_free(arg_str, " ");
	}
	arg_values = ft_split((const char *)arg_str, ' ');
	check_values(arg_str, arg_values);
	lst = malloc(sizeof(t_list **));
	lst[0] = NULL;
	i = -1;
	while (arg_values[++i])
		ft_lstadd_back(lst, ft_lstnew_int(ft_atoil(arg_values[i])));
	ft_free(arg_str, arg_values);
	return (lst);
}
