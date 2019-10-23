/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 02:48:41 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/25 16:24:43 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int		ln;

	ln = 0;
	if (n < 0)
		ln++;
	while (n != 0)
	{
		n /= 10;
		ln++;
	}
	return (ln);
}

static void	ft_help(char *str, int *n, int *ln, int *neg)
{
	str[*ln] = (*n % 10) * -1 + '0';
	*ln -= 1;
	*n /= -10;
	*neg = -1;
}

char		*ft_itoa(int n)
{
	int		ln;
	char	*str;
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	ln = ft_size(n);
	if (ln == 0)
		ln++;
	if (!(str = (char*)malloc(sizeof(char) * (ln + 1))))
		return (NULL);
	str[ln--] = 0;
	if (n < 0)
		ft_help(str, &n, &ln, &neg);
	while (ln >= 0)
	{
		str[ln--] = n % 10 + '0';
		n /= 10;
	}
	if (neg == -1)
		str[0] = '-';
	return (str);
}
