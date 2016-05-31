#include "get_next_line.h"
#include <stdio.h>

int		main()
{
	int			fd;
	char		**str;

	str = (char**)malloc(sizeof(char**) * BUFF_SIZE);
	fd = open("text.txt", O_RDONLY);
	while (get_next_line(fd, str) == 1)
		printf("%s\n", *str);
	printf("\n\n------- finished --------\n\n");
	close(fd);
	return (0);
}
