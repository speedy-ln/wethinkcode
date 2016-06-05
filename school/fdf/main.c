/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 14:13:11 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/05 14:37:49 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		get_point_values(t_raw_map **a, t_map *map)
{
	float			y;
	float			x;
	float			z;
	t_raw_map		*b[3];

	b[1] = NULL;
	while (a[0])
	{
		y = a[0]->y + 0.0;
		x = a[0]->x + 0.0;
		z = a[0]->z + 0.0;
		b[0] = (t_raw_map *)malloc(sizeof(t_raw_map));
		b[0]->x = (1 / sqrt(6)) * ((sqrt(3.0) * x) + (-(sqrt(3.0) * z))) * map->scale;
		b[0]->y = (1 / sqrt(6)) * (x + (2 * y) + z) * map->scale;
		b[0]->x = (b[0]->x) + (800 - (260)) / 2;
		b[0]->y = (b[0]->y) + (300);
		b[0]->next = b[1];
		b[1] = b[0];
		a[0] = a[0]->next;
	}
	a[0] = b[0];
	return (0);
}

int		insert_line(char **line, t_raw_map **a, int y)
{
	int x;

	x = 0;
	while (line[x])
	{
		a[0] = (t_raw_map *)malloc(sizeof(t_raw_map));
		a[0]->y = -(atoi(line[x]));
		a[0]->z = y;
		a[0]->x = x;
		++x;
		a[0]->next = a[1];
		a[1] = a[0];
	}
	return (x);
}

int		get_map_size(char *argv, struct s_mlx_info mlx, t_map a, int y)
{
	char			*line;
	int				fd;
	char			**line2;
	t_raw_map		*b[3];
	int				x;

	b[1] = 0;
	fd = open(argv, O_RDONLY);
	if (fd != -1)
	{
		y = 0;
		while (get_next_line(fd, &line) && ++y)
		{
			if ((line2 = ft_strsplit(line, ' ')) && (a.map_x == 0))
				a.map_x = insert_line(line2, b, (y - 1));
			else if ((x = insert_line(line2, b, (y - 1))) && (x != a.map_x))
				exit(0);
		}
		start_draw(a, b, mlx, y);
		return (0);
	}
	else
		exit(0);
}

void	start_draw(t_map a, t_raw_map *b[3], struct s_mlx_info mlx, int y)
{
	if (a.map_y > 0 || a.map_x > 0)
		a.scale = 20;
	if (a.map_y >= 20 || a.map_x >= 20)
		a.scale = 5;
	if (a.map_y > 100 || a.map_x > 100)
		a.scale = 4;
	if (a.map_y > 500 || a.map_x > 500)
		a.scale = 1;
	if (a.map_x != 0 && ((a.map_y = y) != 0))
	{
		a.points_on_map = a.map_x * y;
		get_point_values(b, &a);
		draw_rows(b, a.map_x, mlx);
		draw_columns(b, mlx, a.map_x);
	}
	else
		exit(0);
}

int		main(int argc, char **argv)
{
	int					y;
	t_map				a;
	struct s_mlx_info	mlx;

	y = 0;
	if (argc == 2)
	{
		mlx.mlx = mlx_init();
		mlx.win = mlx_new_window(mlx.mlx, 800, 800, "FDF");
		mlx_key_hook(mlx.win, getkey_event, 0);
		get_map_size(argv[1], mlx, a, y);
		mlx_loop(mlx.mlx);
	}
	else
		ft_putstr("1 argument Please\n");
	return (0);
}
