/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:52:40 by kvignau           #+#    #+#             */
/*   Updated: 2015/11/24 13:46:23 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(dst);
	while (src[i] != '\0')
	{
		dst[len + i] = (char)src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (dst);
}
