/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:34:59 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/18 15:03:53 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*str1;
	char			*str2;

	i = 0;
	str1 = (char*)dst;
	str2 = (char*)src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
