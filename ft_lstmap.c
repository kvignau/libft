/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:10:22 by kvignau           #+#    #+#             */
/*   Updated: 2015/12/01 13:08:32 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;

	while(lst != NULL)
	{
		tmp = ft_lstnew((*f)(lst), lst->content_size);
		ft_lstadd(&tmp, tmp);
		lst = lst->next;
	}
	return (tmp);
}
