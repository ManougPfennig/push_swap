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

int		ft_atoi_usable(char	*str);
void	error_msg();
double	ft_atoidouble(const char *str);
int		ft_iswspace(char c);

#endif