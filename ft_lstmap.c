/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 01:52:10 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/05 03:37:50 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *first;

	if (lst)
	{
		tmp = f(lst);
		first = tmp;
		while (lst->next)
		{
			tmp->next = f(lst->next);
			tmp = tmp->next;
			lst = lst->next;
		}
		return (first);
	}
	return (NULL);
}
