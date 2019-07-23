/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 15:56:44 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/26 17:25:31 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printmap(char **map, int row)
{
	int				i;
	unsigned int	j;

	i = 0;
	if (map == NULL)
		return ;
	while (i < row)
	{
		j = 0;
		while (map[i][j])
		{
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
