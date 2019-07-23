/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:08:38 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/19 18:08:43 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s != NULL && f != NULL)
	{
		res = ft_strnew(ft_strlen(s));
		if (!res)
			return (NULL);
		while (s[i] != '\0')
		{
			res[i] = f(j, s[i]);
			i++;
			j++;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
