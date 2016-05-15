#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	src_size;
	size_t	size_dest;
	char	*dest;

	i = 0;
	src_size = 0;
	size_dest = 0;
	while (src[src_size])
		src_size++;
	dest = (char*)malloc(sizeof(*dest) * (src_size));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[src_size] = '\0';
	return (dest);
}
