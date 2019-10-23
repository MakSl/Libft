/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:49:14 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/24 18:10:26 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	ln;
	char	*str;

	if (!s || !f)
		return (NULL);
	ln = ft_strlen(s);
	if (ln + 1 == 0)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (ln + 1));
	if (!str)
		return (NULL);
	ln = 0;
	while (s[ln] != 0)
	{
		str[ln] = f(s[ln]);
		ln++;
	}
	str[ln] = 0;
	return (str);
}
