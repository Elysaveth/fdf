/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stricpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 13:28:35 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/23 22:13:25 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stricpy(char *dst, const char *src, unsigned int i)
{
	unsigned int	j;

	j = 0;
	while (src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = src[i];
	return (dst);
}
