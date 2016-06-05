/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 14:12:34 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/05 14:37:32 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int					getkey_event(int keycode)
{
	if (keycode == 53)
		exit(0);
	return (0);
}

void				draw_line(t_vect point1, t_vect point2, \
		struct s_mlx_info mlx)
{
	double		m;
	double		c;
	float		x;
	int			end;
	float		y;

	x = point1.x;
	y = point1.y;
	end = point2.x;
	if (point2.x == point1.x)
		m = 0;
	else
		m = (point2.y - point1.y) / (double)(point2.x - point1.x);
	c = point1.y - m * point1.x;
	if (point2.x < point1.x && (x = point2.x))
		end = point1.x;
	while (x <= end && m != 0 && (x += 0.1))
		mlx_pixel_put(mlx.mlx, mlx.win, x, m * (x - 0.1) + c, 0xD3D3D3);
	while (y <= point2.y && m == 0 && (y += 0.1))
		mlx_pixel_put(mlx.mlx, mlx.win, x, y - 0.1, 0xD3D3D3);
}

void				draw_rows(t_raw_map **a, int length,\
		struct s_mlx_info mlx)
{
	t_raw_map		*temp;
	t_raw_map		*temp2;
	t_vect			point1;
	t_vect			point2;
	int				i;

	i = 1;
	temp = a[0];
	temp2 = a[0];
	temp2 = temp2->next;
	while (temp2 != NULL)
	{
		point1.x = temp->x;
		point1.y = temp->y;
		point2.x = temp2->x;
		point2.y = temp2->y;
		if (i < length)
			draw_line(point1, point2, mlx);
		else
			i = 0;
		temp = temp->next;
		++i;
		temp2 = temp2->next;
	}
}

void				draw_columns(t_raw_map **a,\
		struct s_mlx_info mlx, int length)
{
	t_raw_map		*temp;
	t_raw_map		*temp2;
	t_vect			point1;
	t_vect			point2;

	temp = a[0];
	temp2 = ft_p2place(a, length);
	while (temp2 != NULL)
	{
		point1.x = temp->x;
		point1.y = temp->y;
		point2.x = temp2->x;
		point2.y = temp2->y;
		if (temp->y > 0)
			draw_line(point1, point2, mlx);
		temp = temp->next;
		temp2 = temp2->next;
	}
}

t_raw_map			*ft_p2place(t_raw_map **a, int length)
{
	int				i;
	t_raw_map		*temp;

	i = 0;
	temp = a[0];
	while (i < length && temp != NULL)
	{
		temp = temp->next;
		++i;
	}
	return (temp);
}
