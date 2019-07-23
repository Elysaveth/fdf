/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charchg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:54:16 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/26 19:16:25 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_charchg(const char *s, char old, char new)
{
	char	*res;
	int		i;

	res = (char *)s;
	i = 0;
	if (s == NULL || old < 32 || new < 32 || old > 126 || new > 126)
		return (NULL);
	while (res[i] != '\0')
	{
		if (res[i] == old)
			res[i] = new;
		i++;
	}
	return (res);
}
