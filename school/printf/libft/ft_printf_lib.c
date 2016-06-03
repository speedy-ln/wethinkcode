#include <stdio.h>

int		ft_num_whitespaces(int *i, const char *format)
{
	int		num_whitespaces;
	num_whitespaces = 0;
	if (format[*i] == ' ')
	{
		num_whitespaces = 1;
		*i += 1;
		while (format[*i] && format[*i] == ' ')
		{
			num_whitespaces += 1;
			*i += 1;
		}
	}
	return (num_whitespaces);
}
