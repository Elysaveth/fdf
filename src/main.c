/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <vdelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:48:03 by vdelgado          #+#    #+#             */
/*   Updated: 2019/07/20 22:40:07 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	initializer(t_env *env)
{
	if ((env->mlx = mlx_init()) == (void *)0)
		exit_error(2);
	env->scale.x = 30;
	env->scale.y = -30;
	env->pos.x = 450;
	env->pos.y = 300;
	env->alt = 1;
	env->color = WHITE;
}

static void	recalc_scale(t_env *env)
{
	while (env->scale.x * env->width > WIN_X && env->scale.x > 0)
		env->scale.x -= 1;
	while (env->scale.y * env->height < -WIN_Y && env->scale.y < 0)
		env->scale.y += 1;
	if (abs(env->scale.x) < abs(env->scale.y))
		env->scale.y = -(env->scale.x);
	else
		env->scale.x = -(env->scale.y);
}

int			main(int ac, char **av)
{
	t_env *env;

	if (!(env = (t_env*)malloc(sizeof(t_env))))
		return (1);
	if (ac != 2)
	{
		ft_putstr_fd("Usage: fdf <filename> [ case_size z_size ]\n", 2);
		return (1);
	}
	arg_checker(av[1]);
	initializer(env);
	parser(av[1], env);
	recalc_scale(env);
	env->win = mlx_new_window(env->mlx, WIN_X, WIN_Y, "FDF");
	if (env->win == (void *)0)
		exit_error(2);
	draw_again(env);
	mlx_key_hook(env->win, event_key, env);
	mlx_mouse_hook(env->win, event_mouse, env);
	mlx_loop(env->mlx);
	free(env);
	return (0);
}
