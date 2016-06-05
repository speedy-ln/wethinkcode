/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 14:21:05 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/05 14:21:07 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ilen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i += 1;
	while (n /= 10)
		i += 1;
	return (i + 1);
}

char		*ft_itoa(int n)
{
	char	*str;

	if ((str = (char*)malloc(sizeof(char) * ft_ilen(n))) == NULL)
		return (NULL);
	if (n >= 0)
	{
		while (n != 0)
		{
			*--str = '0' + (n % 10);
			n /= 10;
		}
		return (str);
	}
	else
	{
		while (n != 0)
		{
			*--str = '0' - (n % 10);
			n /= 10;
		}
		*--str = '-';
	}
	return (str);
}
