char	*ft_strstr(char *str, char *to_find)
{
	int index;
	int find;
	int i;
	
	i = 0;
	index = 0;
	while (str[index] != '\0')
	{
		find = 0;
		while (str[index + i] == to_find[i])
		{
			i++;
			if (to_find[i] == '\0')
			{
				return (to_find);
			}
		}
		index++;
	}
	return (0);
}
