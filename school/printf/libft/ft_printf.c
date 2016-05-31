#include "libft.h"

static	int	print_format(const char *format, t_c *list, va_list ap, int *i)
{
	int	nb;

	nb = ft_atoi(&format[*i]);
	while (ft_isdigit(format[*i]))
		*i = *i + 1;
	while (list->c && list->c != format[*i])
		list++;
	if (list->c)
		return (list->f(ap, nb));
	else if (format[*i] == '%')
	{
		ft_putchar('%');
		return (1);
	}
	else
	{
		ft_putchar('%');
		ft_putchar(format[*i]);
		return (2);
	}
}

static	t_c	*list_continued(t_c *list)
{
	list[10].c = 'C';
	list[10].f = &ft_putchar_pf;
	list[11].c = 'D';
	list[11].f = &ft_putnbr_pf;
	list[12].c = 'S';
	list[12].f = &ft_putwchar_pf;
	list[13].c = '\0';
	return (list);
}


static	t_c	*init_list()
{
	t_c	*list;

	list = (t_c *)malloc(sizeof(t_c) * 12);
	list[0].c = 'd';
	list[0].f = &ft_putnbr_pf;
	list[1].c = 'i';
	list[1].f = &ft_putnbr_pf;
	list[2].c = 'c';
	list[2].f = &ft_putchar_pf;
	list[3].c = 's';
	list[3].f = &ft_putstr_pf;
	list[4].c = 'p';
	list[4].f = &ft_puthexa_pf;
	list[5].c = 'o';
	list[5].f = &ft_putoctal_pf;
	list[6].c = 'x';
	list[6].f = &ft_puthexa_min_pf;
	list[7].c = 'X';
	list[7].f = &ft_puthexa_max_pf;
	list[8].c = 'u';
	list[8].f = &ft_putnbr_u_pf;
	list[9].c = 'Z';
	list[9].f = &ft_putz_pf;
	return (list_continued(list));
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	i;
	int	printed;
	t_c	*list;

	i = 0;
	printed = 0;
	list = init_list();
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			printed += print_format(format, list, ap, &i);
		}
		else
		{
			ft_putchar(format[i]);
			printed++;
		}
		i++;
	}
	va_end(ap);
	return (printed);
}
