/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 12:47:44 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/26 12:45:00 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int startm, size_t len)
{
	char			*res;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (startm > ft_strlen(s))
		return (NULL);
	if (!(res = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i] != '\0' && i < len && s)
	{
		res[i] = s[startm];
		i++;
		startm++;
	}
	res[i] = '\0';
	return (res);
}
