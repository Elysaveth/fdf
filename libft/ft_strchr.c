/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 17:52:57 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/20 16:19:56 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			stop;
	char			*res;

	res = (char*)s;
	i = 0;
	stop = (char)c;
	while (res[i] != '\0')
	{
		if (res[i] == stop)
			return (&res[i]);
		i++;
	}
	if (res[i] == '\0' && stop == '\0')
		return (&res[i]);
	return (NULL);
}
