/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:47:30 by kvignau           #+#    #+#             */
/*   Updated: 2015/11/30 12:08:44 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	join = ft_strnew(len);
	if (s1[0])
		ft_strcpy(join, s1);
	if (s2[0])
		ft_strcat(join, s2);
	return (join);
}
