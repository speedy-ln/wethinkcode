/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 14:21:40 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/05 14:21:42 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	x;
	size_t			i;

	i = 0;
	x = (unsigned char)c;
	str1 = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	while (i < n)
	{
		if ((str1[i] = str2[i]) == x)
			return ((void *)&(dst[i + 1]));
		i++;
	}
	return (NULL);
}
