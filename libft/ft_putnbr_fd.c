/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 17:10:45 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/18 15:05:54 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	limit;

	limit = 0;
	if (n == -2147483648)
		limit = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (limit == 1)
		{
			ft_putchar_fd(2 + '0', fd);
			n = -147483648;
		}
		n = n * -1;
	}
	if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
