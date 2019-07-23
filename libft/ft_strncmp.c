/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:33:22 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/24 21:47:11 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				diff;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	diff = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] > str2[i] || str2[i] == '\0')
			return (str1[i] - str2[i]);
		if (str1[i] < str2[i] || str1[i] == '\0')
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
