/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 12:24:09 by lnkadime          #+#    #+#             */
/*   Updated: 2016/05/24 12:44:13 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int index;
	int find;
	int i;

	i = 0;
	index = 0;
	while (str[index] != '\0')
	{
		find = 0;
		while (str[index + i] == to_find[i])
		{
			i++;
			if (to_find[i] == '\0')
			{
				return ((char *)to_find);
			}
		}
		index++;
	}
	return ((char *)0);
}
