/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 16:38:57 by vdelgado          #+#    #+#             */
/*   Updated: 2019/02/26 13:04:09 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	res = tmp;
	while (lst->next)
	{
		tmp->next = f(lst->next);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (res);
}
