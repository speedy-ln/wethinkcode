#include <stdio.h>
#include "libft/libft.h"
#include <wchar.h>

size_t	ft_wcslen(const wchar_t *ws)
{
	const wchar_t *p;

	p = ws;
	while (*p)
		p++;

	return (p - ws);
}

void	ft_putwchar(const wchar_t *ws)
{
	write(1, ws, ft_wcslen(ws));
}

int main()
{
	wchar_t	*str = L"abc";
//	size_t	i = ft_wcslen(str);
//	size_t a = 0;
//	while (a != i)
//	{
//		ft_printf("%c", str[a]);
//		a++;
//	}
//	printf("\n 2nd: %c \n", str[2]);
//	printf("size wchar: %zu\n", sizeof(wchar_t *));
//	printf("size char: %zu\n", sizeof(char *));
//	printf("%zu\n", i);
//	printf("%S \n", str);
	ft_printf("%S \n", str);
//	ft_putwchar(str);
//	printf("%S \n", str);
//	printf("\n");
	return (0);
}
