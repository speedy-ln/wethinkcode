/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c2da.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcowle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 14:27:16 by kcowle            #+#    #+#             */
/*   Updated: 2016/07/18 17:23:59 by kcowle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_c2da(char **array)
{
	int i;

	i = 0;
	while (array[i] != NULL)
		i++;
	return (i);
}
