/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprouts <jsprouts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:53:20 by jsprouts          #+#    #+#             */
/*   Updated: 2019/10/29 17:13:32 by jsprouts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*lstr;

	if (!(lstr = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		lstr->content = NULL;
		lstr->content_size = 0;
	}
	else
	{
		if (!(lstr->content = (void*)malloc(content_size)))
			return (NULL);
		ft_memcpy(lstr->content, content, content_size);
		lstr->content_size = content_size;
	}
	lstr->next = NULL;
	return (lstr);
}
