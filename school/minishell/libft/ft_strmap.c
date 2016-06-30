/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 12:20:22 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/24 12:20:29 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	size_t	i;

	if (!s || !f)
	{
		return (0);
	}
	dest = ft_strdup(s);
	if (dest == 0)
	{
		return (0);
	}
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = f(dest[i]);
		i++;
	}
	return (dest);
}
