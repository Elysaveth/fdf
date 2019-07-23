/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striccpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 21:49:29 by vdelgado          #+#    #+#             */
/*   Updated: 2019/03/09 22:42:17 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_striccpy(char *dst, const char *src, char c, int i)
{
	unsigned int	j;

	j = 0;
	while (src[i] != '\0')
	{
		if (src[i] == c)
			return (dst);
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
