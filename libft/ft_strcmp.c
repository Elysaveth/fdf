/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:26:20 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/19 17:49:48 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;
	int				diff;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	diff = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i++;
	if (str1[i] != str2[i])
		diff = str1[i] - str2[i];
	return (diff);
}
