/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:11:12 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/20 16:50:39 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	j;
	char			*res;

	res = (char*)haystack;
	i = 0;
	if (*needle == '\0')
		return (res);
	while (res[i] != '\0')
	{
		j = 0;
		while (res[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (&res[i]);
		}
		i++;
	}
	return (NULL);
}
