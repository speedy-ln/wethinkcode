/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/17 17:23:03 by lnkadime          #+#    #+#             */
/*   Updated: 2016/05/19 18:13:36 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <fcntl.h>

int		get_next_line(const int fd, char **line)
{
	return (0);
}

int		main()
{
	ssize_t		read_file;
	int			fd;
	int			brk;
	int			counter;
	char		*str;

	counter = 0;
	brk = 1;
	str = (char*)malloc(sizeof(char) * BUFF_SIZE);
	fd = open("text.txt", O_RDONLY);
	while (read(fd, str, 1000) != 0)
	{
		while (*str)
		{
			if (str[counter] == '\n')
			{
				brk = 1;
				break;
			}
			counter++;

		}
		if (brk == 1)
			break;
	}
	while (str[counter])
	{
		str[counter] = '\0';
		counter++;
	}
	close(fd);
	printf("%s\n", str);
	return (0);
}
