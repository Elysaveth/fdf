/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putinmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 17:36:36 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/26 18:18:13 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_putinmap(char **map, int nbr, int nbc, char c)
{
	if (map == NULL || nbr <= 0 || nbc <= 0 || c < 32 || c > 126)
	{
		write(1, "Error\n", 6);
		return (map);
	}
	if (map[nbr - 1][nbc - 1])
		map[nbr - 1][nbc - 1] = c;
	else
		write(1, "Error\n", 6);
	return (map);
}
