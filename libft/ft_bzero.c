#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			  cmp;
	unsigned char *ptr;

	cmp = 0;
	ptr = (unsigned char *)s;
	while (cmp < n && n > 0)
	{
		ptr[cmp] = 0;
		cmp++;
	}
}
