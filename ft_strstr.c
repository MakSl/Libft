/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 23:31:14 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/21 16:50:57 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	ln;

	i = 0;
	j = 0;
	if (needle[0] == 0)
		return ((char*)haystack);
	ln = ft_strlen(needle);
	while (haystack[i] != 0)
	{
		while ((needle[j] != 0) && (haystack[i + j] != 0))
		{
			if (haystack[j + i] != needle[j])
				break ;
			j++;
		}
		if (ln == j)
			return ((char*)(&haystack[i]));
		j = 0;
		i++;
	}
	return (NULL);
}
