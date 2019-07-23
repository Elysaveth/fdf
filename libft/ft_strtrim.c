/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:40:51 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/25 13:24:24 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	char			*res;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return (ft_strnew(1));
	while (s[j] != '\0')
		j++;
	j--;
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j != 0)
		j--;
	if (!(res = ft_strnew((j - i) + 1)))
		return (NULL);
	return (ft_strincpy(res, s, i, (j - i)));
}
