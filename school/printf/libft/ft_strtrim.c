/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 12:20:23 by lnkadime          #+#    #+#             */
/*   Updated: 2016/05/24 13:32:23 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char*)malloc(sizeof(ft_strlen(s) + 1));
	if (!str)
		return (0);
	while (s[i] != '\n' || s[i] != '\t' || s[i] != 32)
		i++;
	while (s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	j = j - 1;
	while (str[j] == '\n' || str[j] == '\t' || str[j] == 32)
		j--;
	str[j + 1] = '\0';
	return (str);
}
