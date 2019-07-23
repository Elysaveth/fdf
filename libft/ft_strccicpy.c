/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccicpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 20:35:43 by vdelgado          #+#    #+#             */
/*   Updated: 2019/03/09 21:45:05 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccicpy(char *dst, const char *src, char c, int i)
{
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
