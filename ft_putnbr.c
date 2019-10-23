/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 05:26:23 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/25 05:52:57 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(int *nb)
{
	if (*nb == -2147483647 - 1)
	{
		*nb += 1;
		return (1);
	}
	return (0);
}

void		ft_putnbr(int n)
{
	int		index;
	char	str[11];
	int		i;

	i = ft_check(&n);
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	index = 0;
	while (n > 0)
	{
		str[index++] = (n % 10) + '0';
		n /= 10;
	}
	if (i)
		str[0] = '8';
	while (index > 0)
		ft_putchar(str[--index]);
}
