#include <ft_ultimator.h>
void	ft_destroy(char ***factory)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (factory[i])
	{
		j = 0;
		while (factory[i][j])
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
