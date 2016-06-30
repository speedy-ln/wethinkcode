/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 12:20:22 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/24 12:20:29 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*ptr;

	if (size == 0)
		return (0);
	ptr = malloc(size);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, size);
	return (ptr);
}
