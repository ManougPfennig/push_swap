/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:18:31 by mapfenni          #+#    #+#             */
/*   Updated: 2023/07/03 17:01:56 by mapfenni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		length;
	char	*dest;

	i = 0;
	j = 0;
	length = 0;
	while (s1 && s1[i++])
		length++;
	while (s2 && s2[j++])
		length++;
	i = 0;
	j = 0;
	dest = malloc((length + 1) * sizeof(char));
	if (!(dest))
		return (NULL);
	dest[length] = '\0';
	while (s1 && s1[i])
		dest[j++] = s1[i++];
	i = 0;
	while (s2 && s2[i])
		dest[j++] = s2[i++];
	return (dest);
}
