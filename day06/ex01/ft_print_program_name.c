void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i])
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	return 0;
}
