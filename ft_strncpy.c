/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:49:15 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/20 19:27:52 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(src);
	while (i < len)
	{
		if (i < size)
		{
			dst[i] = src[i];
			i++;
		}
		else
		{
			dst[i] = 0;
			i++;
		}
	}
	return (dst);
}
