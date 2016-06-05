/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 12:25:21 by lnkadime          #+#    #+#             */
/*   Updated: 2016/05/24 12:53:17 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *cp, int ch)
{
	char	*save;
	char	c;

	save = (char *)0;
	while ((c = *cp))
	{
		if (c == ch)
		{
			save = (char *)cp;
		}
		cp++;
	}
	return (save);
}