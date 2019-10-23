/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 19:32:06 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/24 20:12:39 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len && s[start] != 0)
	{
		str[i++] = s[start++];
	}
	str[i] = 0;
	return (str);
}
