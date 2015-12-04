/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:23:05 by kvignau           #+#    #+#             */
/*   Updated: 2015/12/04 10:41:56 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*strsrc;
	unsigned char		*strdst;
	unsigned char		c1;
	size_t				i;

	i = 0;
	strsrc = (unsigned char *)src;
	strdst = (unsigned char *)dst;
	c1 = (unsigned char)c;
	while (i < n && c1 != strsrc[i])
	{
		strdst[i] = strsrc[i];
		i++;
	}
	if (i == n)
		return (NULL);
	if (strsrc[i] == c1)
	{
		strdst[i] = strsrc[i];
		i++;
	}
	return ((void *)&strdst[i]);
}
