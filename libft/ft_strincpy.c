/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strincpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 22:54:32 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/24 19:14:33 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strincpy(char *dst, const char *src, unsigned int i, \
		unsigned int len)
{
	unsigned int	j;

	j = 0;
	while (src[i] != '\0' && j < len)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = src[i];
	return (dst);
}
