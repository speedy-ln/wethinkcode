#include "includes/libft.h"
#include "ft_ls.h"
#include <dirent.h>
#include <sys/stat.h>

void	ft_ls(int a)
{
	DIR				*dir;
	struct	dirent	*dp;
	char			*file_name;

	dir = opendir(".");
	while ((dp=readdir(dir)) != NULL)
	{
		if (a == 0)
		{
			if (ft_strncmp(".", dp->d_name, 1) != 0)
				printf("%s\n", dp->d_name);
		}
		else
			printf("%s\n", dp->d_name);
	}
	closedir(dir);
}

void	test(int a)
{
	DIR				*dir;
	struct	dirent	*dp;
	char			*file_name;
	t_list			*root;

	root = NULL;
	dir = opendir(".");
	while ((dp=readdir(dir)) != NULL)
	{
		add_element(&root, dp->d_name);
	}
	closedir(dir);
	
	while (root->next != 0)
	{
		printf("%s\t", root->file_name);
		root = root->next;
	}
}

void	add_element(t_list	**list, char *value)
{
	t_list	*add;

	add = (t_list *)malloc(sizeof(t_list *));
	add->file_name = value;
	while (*list != 0)
	{
		if (ft_strcmp(*list->file_name, add->value) > 0)
			break;
		list = &(*list)->next;
	}
	add->next = *list;
	*list = add;
}

void	ft_lsl(int a)
{
	DIR		*dir;
	struct	dirent	*dp;
	struct	stat	file_info;

	
}

int		main(int argc, char **argv)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	if (argc > 1)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
				a = 1;
			i++;
		}
	}
	test(0);
//	ft_ls(a);
	printf("\n");
	return (0);
}
