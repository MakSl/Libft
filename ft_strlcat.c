/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 20:58:59 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/21 16:14:17 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lnd;
	size_t	lns;
	size_t	i;

	i = 0;
	lnd = ft_strlen(dst);
	lns = ft_strlen(src);
	if (size <= lnd)
		lns += size;
	else
		lns += lnd;
	while ((src[i] != 0) && (size > lnd + 1))
	{
		dst[lnd++] = src[i++];
	}
	dst[lnd] = 0;
	return (lns);
}
