#include "get_next_line.h"
#include <stdio.h>

int		main()
{
	int			fd;
	char		**str;

	str = (char**)malloc(sizeof(char**) * BUFF_SIZE);
	fd = open("text.txt", O_RDONLY);
	get_next_line(fd, str);
		printf("\n\n------- finished --------\n\n");
	close(fd);
	return (0);
}
