/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 22:12:32 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/20 23:57:20 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			c1;
	unsigned int	i;

	i = 0;
	c1 = (char)c;
	while (s[i] != 0)
	{
		if (s[i] == c1)
			return ((char*)(&s[i]));
		i++;
	}
	if (s[i] == c1)
		return ((char*)(&s[i]));
	return (NULL);
}
