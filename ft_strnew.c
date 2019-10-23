/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 16:37:33 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/24 17:15:30 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (size + 1 == 0)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	return ((char*)ft_memset(str, 0, size + 1));
}
