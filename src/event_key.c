/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <vdelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:49:02 by vdelgado          #+#    #+#             */
/*   Updated: 2019/07/20 21:39:13 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			event_key_next(int keycode, t_env *e)
{
	if (keycode == 27)
	{
		e->scale.x -= 1;
		e->scale.y += 1;
	}
	if (keycode == 1)
	{
		e->alt -= 1;
		apply_height(e, -1);
	}
	if (keycode == 18)
		e->color = WHITE;
	if (keycode == 19)
		e->color = GREEN;
	if (keycode == 20)
		e->color = ORANGE;
	if (keycode == 21)
		e->color = BLUE;
	if (keycode == 23)
		e->color = PURPLE;
	if (keycode == 22)
		e->color = RED;
	draw_again(e);
	return (1);
}

int			event_key(int keycode, t_env *e)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 124)
		e->pos.x -= 30;
	if (keycode == 125)
		e->pos.y -= 30;
	if (keycode == 123)
		e->pos.x += 30;
	if (keycode == 126)
		e->pos.y += 30;
	if (keycode == 13)
	{
		e->alt += 1;
		apply_height(e, 1);
	}
	if (keycode == 24)
	{
		e->scale.x += 1;
		e->scale.y -= 1;
	}
	return (event_key_next(keycode, e));
}

int			event_mouse(int button, int x, int y, t_env *e)
{
	if (button == 1 && x && y)
	{
		if (e->color == WHITE)
			e->color = GREEN;
		else if (e->color == GREEN)
			e->color = ORANGE;
		else if (e->color == ORANGE)
			e->color = BLUE;
		else if (e->color == BLUE)
			e->color = PURPLE;
		else if (e->color == PURPLE)
			e->color = RED;
		else
			e->color = WHITE;
		draw_again(e);
	}
	return (1);
}
