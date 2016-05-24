/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 12:18:04 by lnkadime          #+#    #+#             */
/*   Updated: 2016/05/24 12:18:12 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	src_size;
	size_t	size_dest;
	char	*dest;

	i = 0;
	src_size = 0;
	size_dest = 0;
	while (src[src_size])
		src_size++;
	dest = (char*)malloc(sizeof(*dest) * (src_size));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[src_size] = '\0';
	return (dest);
}
