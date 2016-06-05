/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 14:26:59 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/05 14:27:07 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		*(dst + count) = src[count];
		count += 1;
	}
	*(dst + count) = '\0';
	return (dst);
}
