/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:19:05 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/20 22:18:20 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	j;

	i = 0;
	j = (unsigned char)c;
	str = (unsigned char*)s;
	while (n-- > 0)
	{
		if (str[i] == j)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
