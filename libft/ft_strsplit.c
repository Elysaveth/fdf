/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:54:44 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/25 13:33:13 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordcount(char const *s, char c)
{
	unsigned int	i;
	int				wrdnb;

	i = 0;
	wrdnb = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] > 31 && s[i] < 127 && s[i] != c)
		{
			wrdnb++;
			while (s[i] > 31 && s[i] < 127 && s[i] != c)
				i++;
		}
		while (s[i] == c)
			i++;
	}
	return (wrdnb);
}

static int		ft_wordlen(char const *s, char c)
{
	int		res;

	res = 0;
	while (*s != c && *s != '\0')
	{
		res++;
		s++;
	}
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	wrdnb;
	char			**res;

	i = 0;
	if (!s)
		return (NULL);
	wrdnb = ft_wordcount(s, c);
	if (!(res = (char**)malloc(sizeof(*res) * (wrdnb + 1))))
		return (NULL);
	while (wrdnb--)
	{
		while (*s == c && *s != '\0')
			s++;
		res[i] = ft_strsub(s, 0, ft_wordlen(s, c));
		s = s + ft_wordlen(s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
