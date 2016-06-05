/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 14:21:54 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/05 14:21:56 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			len;

	len = 0;
	str = (unsigned char*)s;
	while (len < n)
	{
		if (str[len] == (unsigned char)c)
			return ((char*)(&str[len]));
		len += 1;
	}
	return (NULL);
}
