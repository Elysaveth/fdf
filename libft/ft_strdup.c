/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:33:12 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/18 19:23:29 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;

	cpy = (char*)malloc(ft_strlen(s1) + 1);
	if (cpy == '\0')
		return (0);
	return (ft_strcpy(cpy, s1));
}
