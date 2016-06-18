#include "includes/libft.h"
#include "ft_ls.h"
#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <pwd.h>
#include <uuid/uuid.h>
#include <grp.h>
#include <time.h>

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

void	ft_lsr(t_list *root)
{
	if (root == NULL)
		return;
	ft_lsr(root->next);
	printf("%s\t", root->file_name);
}

void	print_list(t_list *root)
{
	while (root->next != 0)
	{
		printf("%s\n", root->file_name);
		root = root->next;
	}
	printf("%s\n", root->file_name);
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

void	ft_lsl(char *str, int show_hidden)
{
	t_list		*root;
	struct	stat	buf;
	struct	passwd	*pwd;
	struct	group	*grp;
	char		*tme;

	root = ft_ls(str, show_hidden);
	while (root != NULL)
	{
		stat(root->file_name, &buf);
		printf((S_ISDIR(buf.st_mode)) ? "d" : "-");
		printf((buf.st_mode & S_IRUSR) ? "r" : "-");
		printf((buf.st_mode & S_IWUSR) ? "w" : "-");
		printf((buf.st_mode & S_IXUSR) ? "x" : "-");
		printf((buf.st_mode & S_IRGRP) ? "r" : "-");
		printf((buf.st_mode & S_IWGRP) ? "w" : "-");
		printf((buf.st_mode & S_IXGRP) ? "x" : "-");
		printf((buf.st_mode & S_IROTH) ? "r" : "-");
		printf((buf.st_mode & S_IWOTH) ? "w" : "-");
		printf((buf.st_mode & S_IXOTH) ? "x  " : "-  ");
		printf("%*d ", 3, buf.st_nlink);
		pwd = getpwuid(buf.st_uid);
		if (pwd == NULL)
			printf("unknown  ");
		else
			printf("%s  ", pwd->pw_name);
		grp = getgrgid(buf.st_gid);
		if (pwd == NULL)
			printf("unknown  ");
		else
			printf("%s  ", grp->gr_name);
		printf("%*lld ", 4, buf.st_size);
		tme = ctime(&buf.st_mtime);
		printf("%.12s ", &(tme[4]));
		printf("%s\n", root->file_name);
		root = root->next;
	}
}

void	ft_ls_recursive(char *str, int show_hidden)
{
	t_list		*root;
	struct	stat	buf;
	char		*temp;

	root = ft_ls(str, show_hidden);
//	print_list(root);
//	printf("\nDIR: %s\n\n", str);
	while (root != NULL)
	{
		stat(root->file_name, &buf);
		printf("filename: %s\n", root->file_name);
		if (S_ISDIR(buf.st_mode))
		{
			temp = (char *)malloc((sizeof(char *) * (ft_strlen(str) + ft_strlen(root->file_name))) + 2);
			temp = ft_strcpy(temp, str);
			temp = ft_strcat(temp, "/");
			temp = ft_strcat(temp, root->file_name);
		//	printf("\n\ntemp: %s\n\n", root->file_name);
		//	printf("\nnew string: %s\n\n", temp);
//			printf("\n%s:\n", temp);
			ft_ls_recursive(temp, show_hidden);
			free(temp);
		}
		//printf("", root->file_name);
		root = root->next;
	}
	return ;
}

int		main(int argc, char **argv)
{
	int	show_hidden;
	int	i;
	t_list		*root;

	show_hidden = 0;
	i = 0;
	if (argc > 1)
	{
		if (argv[1][0] == '-')
		{
			if (argv[1][1] == 'a')
				show_hidden = 1;
			root = ft_ls(".", show_hidden);
			if (argv[1][1] == 'r')
				ft_lsr(root);
			else if (argv[1][1] == 'l')
				ft_lsl(".", show_hidden);
			else if (argv[1][1] == 'R')
				ft_ls_recursive(".", show_hidden);
			else
				print_list(root);
		}
		else
			root = ft_ls(argv[1], show_hidden);
	}
	else
	{
		root = ft_ls(".", 0);
		print_list(root);
	}
	printf("\n");
//	free(list);
//	free(root);
	return (0);
}
