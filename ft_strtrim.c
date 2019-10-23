/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:46:30 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/24 23:00:27 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_min_max(char const *s, int *min, int *max)
{
	while (s[*min] == ' ' || s[*min] == '\n' || s[*min] == '\t')
		*min += 1;
	while ((s[*max] == ' ' || s[*max] == '\n' || s[*max] == '\t')
		&& *min < *max)
		*max -= 1;
}

char			*ft_strtrim(char const *s)
{
	int		min;
	int		max;
	int		i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if ((max = ft_strlen(s)) == 0)
	{
		if (!(str = (char*)malloc(sizeof(char) * 1)))
			return (NULL);
		*str = 0;
		return (str);
	}
	max--;
	min = 0;
	ft_min_max(s, &min, &max);
	if (!(str = (char*)malloc(sizeof(char) * (max + 2 - min))))
		return (NULL);
	while (min <= max)
		str[i++] = s[min++];
	str[i] = 0;
	return (str);
}
