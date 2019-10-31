/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:50:49 by jsprouts          #+#    #+#             */
/*   Updated: 2019/10/29 22:41:17 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*lstr;

	if (alst && *alst && del)
	{
		while (*alst)
		{
			lstr = *alst;
			*alst = (*alst)->next;
			del((lstr)->content, (lstr)->content_size);
			free(lstr);
			lstr = NULL;
		}
	}
}
