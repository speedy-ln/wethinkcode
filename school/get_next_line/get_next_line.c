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
//#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <fcntl.h>

size_t	ft_strlen(char *str);

char		*ft_realloc(char *str, int i)
{
	char	*temp;
	int	j;

	j = 0;
	temp = (char*)malloc((sizeof(char*) * ft_strlen(str)) + i + 1);
	while (j != i)
	{
		temp[j] = str[j];
		j++;
	}
//	printf("size of temp: %zi, size of str: %zi\n",sizeof(temp), sizeof(str));
//	free(str);
	return (temp);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_del_pre_str(char *str, ssize_t i)
{
	char	*temp;
	ssize_t	j;

	j = 0;
	i++;
	temp = (char*)malloc(sizeof(char*) * ft_strlen(str));
	while (str[i])
	{
		temp[j] = str[i];
		i++;
		j++;
	}
//	free(str);
	return (temp);
}

int		get_next_line(const int fd, char **line)
{
	static	char	**unread;
	static	int	file_read;
	char		*str;
	size_t		i;
	size_t		ret;
	int		k;

	*line = NULL;
	i = 0;
	k = 0;
	str = (char *)malloc(sizeof(char*) * BUFF_SIZE);
	unread = (char **)malloc(sizeof(char*) * BUFF_SIZE);
	if (file_read == 0)
	{
		printf("reading file...\n");
		while ((ret = read(fd, str, BUFF_SIZE)))
		{
			k++;
			*unread = ft_realloc(str, BUFF_SIZE);
		}
		printf("\n k is: %i", k);
		printf("unread: %s\n\n", *unread);
		file_read = 1;
	}
//	free(str);
	*line = (char*)malloc(sizeof(**unread) + 1);
	while (unread[0][i] != '\n')
	{
		line[0][i] = unread[0][i];
		i++;
	}
	*unread = ft_del_pre_str(*unread, i);
	printf("unread is now: \n %s", *unread);
	line[0][i] = '\n';
//	*line[i + 1] = '\0';
	printf("%s \n", *line);
	return (-1);
}
