/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lib.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 17:58:23 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/05 18:02:36 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_num_whitespaces(int *i, const char *format)
{
	int		num_whitespaces;

	num_whitespaces = 0;
	if (format[*i] == ' ')
	{
		num_whitespaces = 1;
		*i += 1;
		while (format[*i] && format[*i] == ' ')
		{
			num_whitespaces += 1;
			*i += 1;
		}
	}
	return (num_whitespaces);
}

void	ft_print_whitespace(int n)
{
	while (n > 0)
	{
		ft_putchar(' ');
		n--;
	}
}
