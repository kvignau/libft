/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:52:17 by kvignau           #+#    #+#             */
/*   Updated: 2015/11/27 14:44:18 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int					ft_nbrlen(int n)
{
	int						i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char						*ft_itoa(int n)
{
	char					*str;
	unsigned int			nb;
	int						len;

	len = ft_nbrlen(n);
	nb = (unsigned int)n;
	str = ft_strnew(len + 1);
	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	str[len] = '\0';
	if (n == 0)
		str[--len] = '0';
	else
	{
		while (nb != 0)
		{
			str[--len] = (nb % 10) + 48;
			nb = nb / 10;
		}
	}
	return (str);
}
