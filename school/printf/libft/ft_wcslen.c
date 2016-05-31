#include "libft.h"

size_t	ft_wcslen(const wchar_t *ws)
{
	const wchar_t	*p;

	p = ws;
	while (*p)
		p++;
	return (p - ws);
}
