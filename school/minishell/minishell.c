#include "libft/libft.h"
#include "minishell.h"

int		main(int argc, char **argv)
{
	pid_t	father;

	father = fork();
	if (argc == 1)
	{}
	if (father < 0)
	{
		//Error message, exit here.
		exit(-1);
	}
	if (father != 0)
	{
		//parent process
		wait(NULL);
	}
	else
	{
		//child process
		ft_putstr("$>: ");
		while (get_next_line(0, argv) == 1)
		{
			
			ft_putstr("$>: ");
		}
	}

	return (0);
}
