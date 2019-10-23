/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 23:35:19 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/19 21:29:28 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	if (!dst && !src)
		return (dst);
	str1 = (unsigned char*)src;
	str2 = (unsigned char*)dst;
	if (src >= dst)
	{
		while (len-- > 0)
		{
			str2[i] = str1[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			str2[len] = str1[len];
	}
	return (str2);
}
