/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 14:28:47 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/05 14:28:49 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_new;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str_new = (char*)malloc(sizeof(char) * len);
	if (str_new == NULL)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		str_new[i] = s1[i];
	j = -1;
	while (s2[++j] != '\0')
		str_new[i + j] = s2[j];
	str_new[i + j] = '\0';
	return (str_new);
}
