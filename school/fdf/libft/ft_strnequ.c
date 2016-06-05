/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 14:31:02 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/05 14:31:04 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	len;

	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	len = 0;
	while (*s1 && len < n)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		len += 1;
	}
	return (1);
}
