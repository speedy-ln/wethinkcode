/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 12:18:51 by lnkadime          #+#    #+#             */
/*   Updated: 2016/05/24 12:18:53 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = (char*)malloc(sizeof(char*) * size);
	i = 0;
	if (!ptr)
		return (NULL);
	while (i < size)
		ptr[i++] = '\0';
	return (ptr);
}
