/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 19:06:02 by jsprouts          #+#    #+#             */
/*   Updated: 2019/09/25 19:13:22 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 1;
	if (!argv)
		return ;
	if (argc <= 1)
		return ;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			str = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = str;
			i = 0;
		}
		i++;
	}
}
