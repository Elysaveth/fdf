/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makemap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 15:16:21 by vdelgado          #+#    #+#             */
/*   Updated: 2019/04/16 15:59:08 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_mapfill(char **res, int row, int col, char c)
{
	int	i;
	int j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			res[i][j] = c;
			j++;
		}
		res[i][j] = '\0';
		i++;
	}
	return (res);
}

char		**ft_makemap(int row, int col, char c)
{
	char	**res;
	int		i;

	res = NULL;
	if (row <= 0 || col <= 0 || ((c < 32 || c > 126) && c != 0))
	{
		write(1, "Error\n", 6);
		return (res);
	}
	i = 0;
	res = (char **)malloc(sizeof(*res) * row);
	while (i < row)
	{
		res[i] = (char *)malloc(sizeof(char) * col + 1);
		i++;
	}
	return (ft_mapfill(res, row, col, c));
}
