/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:08:03 by mapfenni          #+#    #+#             */
/*   Updated: 2023/08/12 23:08:03 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "./sources/ft_printf/ft_printf.h"
# include "./sources/libft/libft.h"
# include <limits.h>
# include <stdio.h>

void		error_msg(char *str, char **tab);
t_list		**create_list(char **av);
long long	ft_atoil(char *str);
void		ft_free(char *str, char **tab);
void		free_piles(t_list ***piles);
char		*ft_strjoin_free(char const *s1, char const *s2);
t_list		*ft_lstnew_int(long long content);
t_list		***create_piles(char **av);
void		ft_lstdel_last(t_list **lst);
int			check_order(t_list ***piles);
int			check_spaces(char *str);
void		fix_order(t_list ***piles);
long long	sml_v(t_list **pile);
long long	big_v(t_list **pile);
void		small_list(t_list ***piles);
void		size_three(t_list ***piles);
void		four(t_list ***piles);
void		radix(t_list ***piles);
void		change_to_index(t_list ***piles);
void		print_list(t_list ***piles);
void		sa(t_list ***lst);
void		sb(t_list ***lst);
void		ss(t_list ***lst);
void		pa(t_list ***lst);
void		pb(t_list ***lst);
void		ra(t_list ***lst);
void		rb(t_list ***lst);
void		rr(t_list ***lst);
void		rra(t_list ***lst);
void		rrb(t_list ***lst);
void		rrr(t_list ***lst);

#endif