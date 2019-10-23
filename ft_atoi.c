/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:13:32 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/21 21:12:53 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *str, int i)
{
	int		nb;
	int		j;

	if (i == 1)
		j = -1;
	else
		j = 0;
	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		if (j == 0)
			nb = nb * 10 + (*str - '0');
		else if (i)
		{
			nb = -1 * (*str - '0');
			i = 0;
		}
		else
			nb = nb * 10 - (*str - '0');
		str++;
	}
	return (nb);
}

int			ft_atoi(const char *str)
{
	int		i;

	i = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		i = 1;
	}
	return (ft_check(str, i));
}
