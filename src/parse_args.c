/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <vdelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:48:38 by vdelgado          #+#    #+#             */
/*   Updated: 2019/07/20 22:40:27 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		count_words(const char *line)
{
	int		count;
	int		i;
	int		len;
	char	lastchar;

	i = 0;
	count = 0;
	len = ft_strlen(line);
	if (len > 0)
		lastchar = line[0];
	while (i <= len)
	{
		if ((line[i] == ' ' || line[i] == '\0') && lastchar != ' ')
			count++;
		lastchar = line[i];
		i++;
	}
	return (count);
}

static void		read_board(char *filepath, t_env *env)
{
	int		fd;
	char	*buff;

	env->height = 1;
	env->width = 0;
	fd = open(filepath, O_RDONLY);
	get_next_line(fd, &buff);
	env->width = count_words(buff);
	free(buff);
	while (get_next_line(fd, &buff) > 0)
	{
		if (count_words(buff) != env->width)
			exit_error(1);
		env->height++;
		free(buff);
	}
	close(fd);
}

static void		smallest(t_env *env, int x, int y, int c)
{
	size_t tmp;

	if (c == 0)
	{
		tmp = abs(env->map[y][x].z);
		if ((!env->smallest && tmp != 0) || (env->smallest > tmp && tmp != 0))
			env->smallest = tmp;
	}
	else
	{
		if (!env->smallest)
			env->smallest = 1;
		while (y < env->height)
		{
			while (x < env->width)
			{
				env->map[y][x].z /= env->smallest;
				env->map[y][x].z0 /= env->smallest;
				x++;
			}
			x = 0;
			y++;
		}
	}
}

static void		read_nb(char *filepath, t_env *env)
{
	char	*buff;
	char	**nb_tab;
	int		xy[3];

	xy[0] = 0;
	xy[1] = 0;
	xy[2] = open(filepath, O_RDONLY);
	while (get_next_line(xy[2], &buff) > 0)
	{
		nb_tab = ft_strsplit(buff, ' ');
		while (*nb_tab)
		{
			env->map[xy[1]][xy[0]].z = ft_atoi(*nb_tab);
			smallest(env, xy[0], xy[1], 0);
			env->map[xy[1]][xy[0]].z0 = env->map[xy[1]][xy[0]].z;
			xy[0]++;
			free(*nb_tab);
			nb_tab++;
		}
		xy[0] = 0;
		xy[1]++;
		free(buff);
	}
	close(xy[2]);
	smallest(env, 0, 0, 1);
}

void			parser(char *filepath, t_env *env)
{
	int i;

	i = -1;
	read_board(filepath, env);
	env->map = (t_point **)malloc(sizeof(t_point *) * env->height);
	while (++i < env->height)
		env->map[i] = (t_point *)malloc(sizeof(t_point) * env->width);
	read_nb(filepath, env);
}
