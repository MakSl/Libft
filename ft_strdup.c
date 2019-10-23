/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:47:28 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/20 19:34:44 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	if ((j + 1) == 0)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (j + 1));
	if (!str)
		return (NULL);
	while (s1[i] != 0)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
