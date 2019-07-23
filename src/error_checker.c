/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Liz <Liz@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:47:54 by vdelgado          #+#    #+#             */
/*   Updated: 2019/07/20 22:40:41 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		arg_checker(char *filepath)
{
	int fd;

	fd = open(filepath, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_fd("Error 404: File not found.\n", 2);
		exit(0);
	}
}

void		exit_error(int c)
{
	if (c == 1)
		ft_putstr_fd("Error: Map is invalid.\n", 2);
	if (c == 2)
		ft_putstr_fd("Error: mlx failed.\n", 2);
	exit(0);
}
