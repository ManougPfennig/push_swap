/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:20:00 by marvin            #+#    #+#             */
/*   Updated: 2023/05/30 19:54:33 by marvin           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "./sources/ft_printf/ft_printf.h"
# include "./sources/libft/libft.h"
# include <limits.h>
# include <stdio.h>

void	error_msg();
t_list	**create_list(char **av);
int		ft_atoil(char *str);
void	ft_free(char *str, char **tab);
char	*ft_strjoin_free(char const *s1, char const *s2);
t_list	*ft_lstnew_int(int content);

#endif