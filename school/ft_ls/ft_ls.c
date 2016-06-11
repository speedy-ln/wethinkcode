#include "includes/libft.h"
#include "ft_ls.h"
#include <dirent.h>
#include <sys/stat.h>

t_list	*ft_ls(char *str, int show_hidden)
{
	DIR				*dir;
	struct	dirent	*dp;
	char			*file_name;
	t_list			*root;

	root = NULL;
	dir = opendir(str);
	while ((dp=readdir(dir)) != NULL)
	{
		if (show_hidden == 0)
		{
			if (ft_strncmp(".", dp->d_name, 1) != 0)
				add_element(&root, dp->d_name);
		}
		else
			add_element(&root, dp->d_name);
	}
	closedir(dir);
	return (root);
}

void	print_list(t_list *root)
{
	while (root->next != 0)
	{
		printf("%s\t", root->file_name);
		root = root->next;
	}
	printf("%s\t", root->file_name);
}

void	add_element(t_list	**list, char *value)
{
	t_list	*add;

	add = (t_list *)malloc(sizeof(t_list *));
	add->file_name = value;
	while (*list != 0)
	{
		if (ft_strcmp((*list)->file_name, add->file_name) > 0)
			break;
		list = &(*list)->next;
	}
	add->next = *list;
	*list = add;
}

t_list	*ft_lsl(char *str, int show_hidden)
{
	DIR		*dir;
	struct	dirent	*dp;
	struct	stat	file_info;
	t_list		*root;

	root = NULL;
	return (root);
}

static	t_functions	*init_list(void)
{
	t_functions	*list;

	list = (t_functions *)malloc(sizeof(t_functions) * 6);
	list[0].c = 'a';
	list[0].f = &ft_ls;
	list[1].c = 'l';
	list[1].f = &ft_lsl;
	list[2].c = 't';
	list[2].f = &ft_ls;
	list[3].c = 'r';
	list[3].f = &ft_ls;
	list[4].c = 'R';
	list[4].f = &ft_ls;
	return (list);
}

int		main(int argc, char **argv)
{
	int	show_hidden;
	int	i;
	t_functions	*list;
	t_list		*root;

	list = init_list();
	show_hidden = 0;
	i = 0;
	if (argc > 1)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '-')
			{
				while (list->c && list->c != argv[1][i + 1])
					list++;
				if (list->c)
				{
					if (list->c == 'a')
						show_hidden = 1;
					root = list->f(".", show_hidden);
				}
				else
					root = ft_ls(".", show_hidden);
			}
			else
			{
				root = list->f(argv[1], show_hidden);
				break;
			}
			i++;
		}
		print_list(root);
	}
	else
	{
		root = ft_ls(".", 0);
		print_list(root);
	}
	printf("\n");
	return (0);
}
