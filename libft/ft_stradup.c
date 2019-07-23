/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 15:13:37 by vdelgado          #+#    #+#             */
/*   Updated: 2019/03/21 15:16:44 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_stradup(const char **src, int lines)
{
	int		i;
	int		j;
	char	**cpy;

	cpy = (char**)malloc(sizeof(*cpy) * lines);
	i = 0;
	while (i < lines)
	{
		cpy[i] = (char*)malloc(sizeof(char) * (ft_strlen(src[i]) + 1));
		i++;
	}
	i = 0;
	while (i < lines)
	{
		j = 0;
		while (src[i][j] != '\0')
		{
			cpy[i][j] = src[i][j];
			j++;
		}
		cpy[i][j] = src[i][j];
		i++;
	}
	return (cpy);
}
