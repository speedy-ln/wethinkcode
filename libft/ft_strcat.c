#include "libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	ft_strcpy(&s1[ft_strlen(s1)], s2);
	return (s1);
}
