/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:05:20 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/20 16:19:53 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	stop;
	char			*res;

	res = (char*)s;
	i = 0;
	stop = (char)c;
	while (res[i] != '\0')
		i++;
	if (res[i] == '\0' && stop == '\0')
		return (&res[i]);
	while (i >= 0)
	{
		if (res[i] == stop)
			return (&res[i]);
		i--;
	}
	return (NULL);
}
