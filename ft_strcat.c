/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 19:28:20 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/20 20:19:26 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	ln;
	size_t	i;

	i = 0;
	ln = ft_strlen(s1);
	while (s2[i] != 0)
	{
		s1[ln++] = s2[i++];
	}
	s1[ln] = 0;
	return (s1);
}
