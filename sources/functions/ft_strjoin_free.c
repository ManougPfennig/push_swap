/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:23:11 by mapfenni          #+#    #+#             */
/*   Updated: 2023/07/03 16:43:39 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		length;
	char	*dest;

	i = 0;
	j = 0;
	length = 0;
	while (s1[i++])
		length++;
	while (s2[j++])
		length++;
	i = 0;
	j = 0;
	dest = malloc((length + 1) * sizeof(char));
	if (!(dest))
		return (NULL);
	dest[length] = '\0';
	while (s1[i])
		dest[j++] = s1[i++];
	i = 0;
	while (s2[i])
		dest[j++] = s2[i++];
	ft_free((char *)s1);
	return (dest);
}
