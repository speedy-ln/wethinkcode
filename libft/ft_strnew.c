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
