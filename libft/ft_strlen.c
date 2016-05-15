#include <string.h>

size_t   ft_strlen(char *str)
{
	size_t  counter;

	counter = 0;
	while (str[counter])
		counter++;
	return counter;
}
