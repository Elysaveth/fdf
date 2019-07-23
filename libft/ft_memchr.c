/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:40:09 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/19 16:48:13 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	stop;
	unsigned char	*str;

	i = 0;
	stop = (unsigned char)c;
	str = (unsigned char*)s;
	while (i < n)
	{
		if (str[i] == stop)
			return (str + i);
		i++;
	}
	return (NULL);
}
