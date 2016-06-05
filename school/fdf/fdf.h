/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 14:12:55 by lnkadime          #+#    #+#             */
/*   Updated: 2016/06/05 14:37:42 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <fcntl.h>
# include <math.h>
# include <ctype.h>
# include "mlx.h"
# include "libft/libft.h"

typedef struct	s_map{
	int					map_y;
	int					map_x;
	int					points_on_map;
	int					scale;
}				t_map;

typedef struct	s_vect{
	int					y;
	int					x;
}				t_vect;

typedef struct	s_raw_map{
	int					y;
	int					x;
	int					z;
	struct s_raw_map	*next;
}				t_raw_map;

struct			s_mlx_info{
	void				*mlx;
	void				*win;
};

t_raw_map		*ft_p2place(t_raw_map **a, int length);
t_vect			find_below(t_raw_map **a);
void			draw_rows(t_raw_map **a, int length, struct s_mlx_info mlx);
void			draw_columns(t_raw_map **a, struct s_mlx_info mlx,\
		int length);
void			start_draw(t_map a, t_raw_map *b[3], struct s_mlx_info mlx,\
		int y);
int				getkey_event(int keycode);
#endif
