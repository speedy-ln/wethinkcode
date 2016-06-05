/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 14:34:48 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/05 14:34:49 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	if ((sub_str = (char*)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		sub_str[i] = s[start];
		start += 1;
		i += 1;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
