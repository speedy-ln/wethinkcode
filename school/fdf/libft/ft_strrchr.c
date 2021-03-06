/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 14:33:34 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/05 14:33:37 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;

	i = 0;
	last = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = i;
		i += 1;
	}
	if (s[i] == c)
		last = i;
	if (last != 0)
		return ((char*)(&s[last]));
	return (NULL);
}
