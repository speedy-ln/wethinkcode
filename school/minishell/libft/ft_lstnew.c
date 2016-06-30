/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 12:20:22 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/24 12:20:29 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elem;

	elem = (t_list *)ft_memalloc(sizeof(t_list));
	if (elem == 0)
		return (0);
	if (content == 0)
	{
		content_size = 0;
		elem->content = 0;
	}
	else
	{
		elem->content = ft_memalloc(content_size);
		if (elem->content == 0)
		{
			ft_memdel((void **)&elem);
			return (0);
		}
		ft_memcpy(elem->content, content, content_size);
	}
	elem->content_size = content_size;
	elem->next = 0;
	return (elem);
}
