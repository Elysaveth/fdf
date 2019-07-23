/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <vdelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:29:17 by vdelgado          #+#    #+#             */
/*   Updated: 2019/07/20 22:32:38 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

#include "libft.h"
#include "mlx.h"
#include <math.h>
#include <fcntl.h>

# define WIN_X 1000
# define WIN_Y 1000
# define WHITE 0xFFFFFF
# define GREEN 0x04963E
# define ORANGE 0xDB8B0A
# define BLUE 0x0E50BA
# define PURPLE 0x8C0FC6
# define RED 0xAC0606

typedef struct			s_point
{
	int					z;
	int					z0;
	int					xp;
	int					yp;
}						t_point;

typedef struct			s_coord
{
	int					x;
	int					y;
}						t_coord;

typedef struct			s_env
{
	void				*mlx;
	void				*win;
	t_point				**map;
	t_coord				scale;
	t_coord				pos;
	int					height;
	int					width;
	int					alt;
	size_t				smallest;
	int					color;
}						t_env;

void					arg_checker(char *filepath);
void					parser(char *filepath, t_env *env);
void					exit_error(int c);
void					apply_proj(t_env *env);
void					apply_height(t_env *e, int c);
void					draw_lines(t_env *env, int x, int y);
void					draw_again(t_env *e);
int						event_mouse(int button, int x, int y, t_env *env);
int						event_key(int keycode, t_env *env);
#endif
