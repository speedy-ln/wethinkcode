/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 12:21:43 by lnkadime          #+#    #+#             */
/*   Updated: 2016/05/24 12:22:12 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	dest = ft_strdup(s);
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(dest[i]);
		i++;
	}
	return (dest);
}
