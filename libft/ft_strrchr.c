char	*ft_strrchr(char *cp, int ch)
{
	char	*save;
	char	c;

	save = (char *) 0;
	while ((c = *cp))
	{
		if (c == ch)
		{
			save = (char *) cp;
		}
		cp++;
	}
	return (save);
}
