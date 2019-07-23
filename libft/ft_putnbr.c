/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:57:46 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/18 15:05:35 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int	limit;

	limit = 0;
	if (n == -2147483648)
		limit = 1;
	if (n < 0)
	{
		ft_putchar('-');
		if (limit == 1)
		{
			ft_putchar(2 + '0');
			n = -147483648;
		}
		n = n * -1;
	}
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
