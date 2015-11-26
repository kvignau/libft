/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:23:05 by kvignau           #+#    #+#             */
/*   Updated: 2015/11/25 14:11:10 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*strsrc;
	unsigned char	*strdst;
	unsigned char	c1;
	size_t			i;

	i = 0;
	strsrc = (unsigned char *)src;
	strdst = (unsigned char *)dst;
	c1 = (unsigned char)c;
	while (i < n && c1 != strdst[i])
	{
		strdst[i] = strsrc[i];
		i++;
	}
	if (i < n)
		return (&strdst[i + 1]);
	return (NULL);
}
