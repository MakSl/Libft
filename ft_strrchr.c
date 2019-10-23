/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 22:44:23 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/20 23:27:21 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*s1;
	char			c1;
	unsigned int	i;

	i = 0;
	c1 = (char)c;
	s1 = NULL;
	while (s[i] != 0)
	{
		if (s[i] == c1)
			s1 = (char*)&s[i];
		i++;
	}
	if (s[i] == c1)
		s1 = (char*)&s[i];
	return (s1);
}
