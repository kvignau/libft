/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:10:22 by kvignau           #+#    #+#             */
/*   Updated: 2015/12/01 17:08:59 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*new;

	if (lst == NULL || (*f))
		return (NULL);
	start = NULL;
	while (lst != NULL)
	{
		new = (*f)(lst->content);
		if (start == NULL)
			start = new;
		ft_lstadd(&start, new);
		lst = lst->next;
	}
	return (start);
}
