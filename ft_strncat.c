/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 20:38:38 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/20 20:58:13 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	ln;
	size_t	i;

	i = 0;
	ln = ft_strlen(s1);
	while (n-- > 0)
	{
		s1[ln++] = s2[i++];
		if (s2[i - 1] == 0)
			return (s1);
	}
	s1[ln] = 0;
	return (s1);
}
