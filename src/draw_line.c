/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <vdelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:48:25 by vdelgado          #+#    #+#             */
/*   Updated: 2019/07/20 21:39:25 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		pixel_put(t_env *env, int x, int y, int color)
{
	mlx_pixel_put(env->mlx, env->win, env->pos.x + x, env->pos.y + y, color);
}

static void		draw_line(t_env *env, t_coord src, t_coord dst)
{
	int x_length;
	int y_length;
	int sign[2];
	int err[2];

	x_length = abs(dst.x - src.x);
	y_length = abs(dst.y - src.y);
	sign[0] = (src.x < dst.x ? 1 : -1);
	sign[1] = (src.y < dst.y ? 1 : -1);
	err[0] = (x_length > y_length ? x_length : -y_length) / 2;
	while (src.x != dst.x || src.y != dst.y)
	{
		pixel_put(env, src.x, src.y, env->color);
		err[1] = err[0];
		if (err[1] > -x_length)
		{
			err[0] -= y_length;
			src.x += sign[0];
		}
		if (err[1] < y_length)
		{
			err[0] += x_length;
			src.y += sign[1];
		}
	}
}

void			draw_again(t_env *env)
{
	int x;
	int y;

	x = 0;
	y = 0;
	apply_proj(env);
	mlx_clear_window(env->mlx, env->win);
	while (y < env->height)
	{
		while (x < env->width)
		{
			draw_lines(env, x, y);
			x++;
		}
		x = 0;
		y++;
	}
}

void			draw_lines(t_env *env, int x, int y)
{
	t_coord p[2];

	p[0].x = env->map[y][x].xp;
	p[0].y = env->map[y][x].yp;
	if (x < env->width - 1)
	{
		p[1].x = env->map[y][x + 1].xp;
		p[1].y = env->map[y][x + 1].yp;
		draw_line(env, p[0], p[1]);
	}
	if (y < env->height - 1)
	{
		p[1].x = env->map[y + 1][x].xp;
		p[1].y = env->map[y + 1][x].yp;
		draw_line(env, p[0], p[1]);
	}
}
