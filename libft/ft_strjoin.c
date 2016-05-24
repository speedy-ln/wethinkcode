#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	ptr = (char*)malloc(sizeof(char*) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	ft_strcpy(ptr, s1);
	ft_strcat(ptr, s2);
	return (ptr);
}
