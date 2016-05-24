#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	src_size;
	char	*dest;

	int i = 0;
	int size_dest = 0;
	while (src[src_size])
		src_size++;
	dest = (char*)malloc(sizeof(*dest) * (src_size));
	while (src[i])
	{
		dest[i] = src[i]
		i++;
	}
	dest[src_size] = '\0';
	return (dest);
}
