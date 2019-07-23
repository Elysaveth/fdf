/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 12:47:36 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/25 13:16:45 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*str1;
	char			*str2;

	i = 0;
	str1 = (char*)dst;
	str2 = (char*)src;
	if (str2 < str1)
	{
		while ((len--) > 0)
			*(str1 + len) = *(str2 + len);
	}
	else
	{
		while (i < len)
		{
			*(str1 + i) = *(str2 + i);
			i++;
		}
	}
	return (dst);
}
