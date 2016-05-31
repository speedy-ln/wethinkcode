#include "libft.h"

void	ft_putwstr(wchar_t *str)
{
	size_t	i;
	size_t	j;

	i = ft_wcslen(str);
	j = 0;
	while (i != j)
	{
		ft_putchar(str[j]);
		j++;
	}
}
