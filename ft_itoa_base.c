/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 13:27:26 by kvignau           #+#    #+#             */
/*   Updated: 2016/01/19 16:43:13 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void					ft_base(int len, char **str, unsigned int base,
								int nb)
{
	char					tab_base[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	while (nb != 0)
	{
		len--;
		if (base >= 10 && nb % base >= 10)
		{
			(*str)[len] = tab_base[(nb % base) - 10];
		}
		else
		{
			(*str)[len] = (nb % base) + 48;
		}
		nb = nb / base;
	}
}

char						*ft_itoa_base(int n, unsigned int base)
{
	char					*str;
	unsigned int			nb;
	size_t					len;

	len = ft_nbrlen(n, base);
	nb = (unsigned int)n;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	if (base == 10 && n < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	str[len] = '\0';
	if (n == 0)
		str[--len] = '0';
	else
	{
		ft_base(len, &str, base, nb);
	}
	return (str);
}
