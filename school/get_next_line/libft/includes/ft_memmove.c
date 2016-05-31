/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 12:13:07 by lnkadime          #+#    #+#             */
/*   Updated: 2016/05/24 12:14:11 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*temp1;
	const char	*temp2;
	char		tmp[n];
	size_t		i;

	i = 0;
	temp1 = (char *)s1;
	temp2 = (const char *)s2;
	while (i < n)
	{
		tmp[i] = temp2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		temp1[i] = tmp[i];
		i++;
	}
	return (s1);
}
