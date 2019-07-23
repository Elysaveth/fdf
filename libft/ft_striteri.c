/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 11:18:21 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/18 15:09:19 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(j, &s[i]);
			i++;
			j++;
		}
	}
}
