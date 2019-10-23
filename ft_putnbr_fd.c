/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 06:00:50 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/25 06:08:23 by jsprouts         ###   ########.fr       */
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

void		ft_putnbr_fd(int n, int fd)
{
	int		index;
	char	str[11];
	int		i;

	i = ft_check(&n);
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
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
		ft_putchar_fd(str[--index], fd);
}
