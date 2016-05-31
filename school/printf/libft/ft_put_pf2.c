#include "libft.h"
#include <stdio.h>

int		ft_putz_pf(va_list ap, int nbb)
{
	int		i;

	i = 0;
	ap = ap + 0;
	while (i++ < nbb - 1)
		ft_putchar(' ');
	ft_putchar('Z');
	return (i + 1);
}

int		ft_puthexa_min_pf(va_list ap, int nbb)
{
	int		i;
	int		nb;
	int		nb2;

	i = 0;
	nb = va_arg(ap, unsigned int);
	nb2 = ft_return_nb_nb(nb, "0123456789abcdef");
	while (i++ < nbb - nb2)
		ft_putchar(' ');
	return (ft_putnbr_base_u(nb, "0123456789abcdef") + i);
}

int		ft_puthexa_max_pf(va_list ap, int nbb)
{
	int		i;
	int		nb;
	int		nb2;

	i = 0;
	nb = va_arg(ap, unsigned int);
	nb2 = ft_return_nb_nb(nb, "0123456789ABCDEF");
	while (i++ < nbb - nb2)
		ft_putchar(' ');
	return (ft_putnbr_base_u(nb, "0123456789ABCDEF") + i);
}

int		ft_puthexa_pf(va_list ap, int nbb)
{
	void		*nb;
	int			i;
	int			nb2;

	i = 0;
	nb = va_arg(ap, void*);
	nb2 = ft_return_nb_nb((long)nb, "0123456789abcdef") + 2;
	while (i++ < nbb - nb2)
		ft_putchar(' ');
	ft_putstr("0x");
	return (ft_putnbr_base((long)nb, "0123456789abcdef") + i + 2);
}

int		sft_putwchar(wchar_t *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int		ft_putwchar(const wchar_t *ws);

int		ft_putwchar_pf(va_list ap, int nbb)
{
	int		i;
	int		size;
	wchar_t		*s;
//	char		*test;

	i = 0;
	s = va_arg(ap, wchar_t *);
//	test = (char *)s;
	size = 0;
//	printf("\n printf3: %s \n", test);
//	printf("\n printf: %S \n", s);
	while (s[size])
		size++;
	while (i++ < nbb - size)
		ft_putchar(' ');
	if (s)
	{
		sft_putwchar(s);
		return (size + i);
	}
	else
	{
		ft_putstr("(null)");
		return (6 + i);
	}
}
