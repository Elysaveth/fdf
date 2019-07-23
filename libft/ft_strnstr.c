/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:21:07 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/20 19:45:17 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= i)
	{
		if (ft_memcmp(haystack, needle, i) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
