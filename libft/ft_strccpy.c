/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 18:01:07 by vdelgado          #+#    #+#             */
/*   Updated: 2019/03/09 20:29:09 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccpy(char *dst, const char *src, char c)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == c)
			return (dst);
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst);
}
