/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 23:25:23 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/25 02:48:09 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_nb(char const *s, char c)
{
	int		i;
	int		j;
	int		nb;

	i = 0;
	j = 0;
	nb = 0;
	while (s[i] != 0)
	{
		if (j == 0 && s[i] != c)
		{
			j = 1;
			nb++;
		}
		if (j == 1 && s[i] == c)
			j = 0;
		i++;
	}
	return (nb);
}

static int	ft_count_ln(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

static int	ft_addition(char **str, char const *s, char c, int nb)
{
	int		i;
	int		j;

	i = 0;
	while (i < nb)
	{
		j = 0;
		while (*s == c && *s != 0)
			s++;
		if (!(str[i] = (char*)malloc(sizeof(char) * (ft_count_ln(s, c) + 1))))
			return (-1);
		while (*s != c)
		{
			str[i][j++] = *s;
			s++;
		}
		str[i++][j] = 0;
	}
	str[i] = NULL;
	return (0);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		nb;

	if (!s)
		return (NULL);
	nb = ft_count_nb(s, c);
	if (!(str = (char**)malloc(sizeof(char*) * (nb + 1))))
		return (NULL);
	if (ft_addition(str, s, c, nb) == -1)
	{
		while (nb >= 0)
			free(str[nb--]);
		free(str);
	}
	return (str);
}
