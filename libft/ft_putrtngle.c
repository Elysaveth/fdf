/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putrtngle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 13:49:58 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/26 13:50:05 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putrtngle(int row, int col, char c)
{
	int	i;
	int	j;

	i = 0;
	if (col < 0 || row < 0 || c > 126 || c < 32)
	{
		write(1, "Error\n", 6);
		return ;
	}
	while (i++ < row)
	{
		j = 0;
		while (j++ < col)
			write(1, &c, 1);
		write(1, "\n", 1);
	}
}
