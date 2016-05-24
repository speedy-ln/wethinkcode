/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 12:10:57 by lnkadime          #+#    #+#             */
/*   Updated: 2016/05/24 12:10:59 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char		*tmp;
	const char	*tmp2;
	size_t		i;

	i = 0;
	tmp = (char*)s1;
	tmp2 = (char*)s2;
	while (i < n)
	{
		tmp[i] = tmp2[i];
		i++;
	}
	return (s1);
}
