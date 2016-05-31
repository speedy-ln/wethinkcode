#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include "get_next_line.h"
#include <stdio.h>

char	*ft_realloc(char *ptr, size_t size)
{
	char	*temp;
	int	i;

	temp = ptr;
	ptr = malloc(size);
	i = 0;
	while (temp[i])
	{
		ptr[i] = temp[i];
		i++;
	}
	free(temp);
	return (ptr);
}

char	read_fd(const int fd, )
{
	static char	buff[BUFF_SIZE];
	static char	*ptr;
	static int	len;
	char		c;

	if (len == 0)
	{
		len = read(fd, buff, BUFF_SIZE);
		ptr = (char*)&buff;
		if (len == 0)
			return (0);
	}
	c = *ptr;
	ptr++;
	len--;
	return (c);
}

int	get_next_line(const int fd, char **line)
{
	char	c;
	int	i;

//printf("initializing...\n");

	i = 0;
	*line = (char *)malloc(sizeof(char *) * (BUFF_SIZE + 1));
//printf("*line malloc'd to size %zi \n", sizeof(*line));
	if (*line == NULL)
		return (0);
//printf("memory successfully set to line.\n");
	c = read_fd(fd);
printf("first character read: \n%c$", c);
	while (c != '\n' && c != '\0')
	{
		line[0][i] = c;
		c = read_fd(fd);
//printf("%c", c);
		i++;
		if (i % (BUFF_SIZE + 1) == 0)
		{
			*line = ft_realloc(*line, i + BUFF_SIZE + 1);	
		}
	}
	if (c == '\n')
	{
		c = *ptr;
	}
	//*line[i] = 0;
	if (c == 0)
		return (0);
	return (1);
}
