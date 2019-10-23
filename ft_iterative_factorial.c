/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 19:20:53 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/25 19:21:21 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_factorial(int nb)
{
	int		ft;

	ft = 1;
	if (nb > 12 || nb < 0)
		return (0);
	while (nb != 0)
		ft *= nb--;
	return (ft);
}
