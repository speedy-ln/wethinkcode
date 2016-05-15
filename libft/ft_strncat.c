#include <string.h>
#include "libft.h"

char	*ft_strncat(char *s1, char *s2, size_t n)
{
	unsigned len1 = ft_strlen(s1);
	unsigned len2 = ft_strlen(s2);

	if (len2 < n)
	{
		ft_strcpy(&s1[len1], s2);
	}
	else
	{
		ft_strncpy(&s1[len1], s2, n);
		s1[len1 + n] = '\0';
	}
	return (s1);
}
