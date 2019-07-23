/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 16:23:12 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/25 17:25:04 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*tmp2;

	if (alst == NULL)
		return ;
	tmp2 = *alst;
	while (tmp2 != NULL)
	{
		tmp = tmp2->next;
		ft_lstdelone(&tmp2, del);
		tmp2 = tmp;
	}
	*alst = NULL;
}
