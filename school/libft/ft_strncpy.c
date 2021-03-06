/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 12:18:25 by lnkadime          #+#    #+#             */
/*   Updated: 2016/05/24 12:18:34 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s2[i] != '\0' && n > 0)
	{
		s1[i] = s2[i];
		i++;
		n--;
	}
	if (n > 0)
	{
		while (n > 0)
		{
			s1[i] = '\0';
			i++;
			n--;
		}
	}
	return (s1);
}
