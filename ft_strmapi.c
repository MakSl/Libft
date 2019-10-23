/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 19:11:23 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/24 19:16:17 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			ln;
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	ln = ft_strlen(s);
	if (ln + 1 == 0)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (ln + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
