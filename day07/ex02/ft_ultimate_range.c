#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;

	index = 0;
	if (min >= max)
	{
		**range = 0;
		return (sizeof(range));
	}
	*range = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		range[index] = min;
		min++;
		index++;
	}
	return (sizeof(range));
}
