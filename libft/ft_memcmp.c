#include <string.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*tmp2;

	tmp = (unsigned char*)s1;
	tmp2 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (tmp[i] != tmp2[i])
			return (tmp[i] - tmp2[i]);
		else
			i++;
	}
	return (0);
}
