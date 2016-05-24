/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 12:05:48 by lnkadime          #+#    #+#             */
/*   Updated: 2016/05/24 12:06:26 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cmp;
	unsigned char	*ptr;

	cmp = 0;
	ptr = (unsigned char *)b;
	while (cmp < len)
	{
		ptr[cmp] = (unsigned char)c;
		cmp++;
	}
	return (b);
}
