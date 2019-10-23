/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:48:44 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/20 20:36:43 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	if (!dst && !src)
		return (dst);
	str1 = (unsigned char*)src;
	str2 = (unsigned char*)dst;
	while (i < n)
	{
		str2[i] = str1[i];
		i++;
	}
	return (str2);
}
