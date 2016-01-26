/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 13:27:26 by kvignau           #+#    #+#             */
/*   Updated: 2016/01/25 14:05:27 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void					ft_base_ll(size_t len, char **str,
		unsigned int base, long long n)
{
	char					tab_base[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',\
					'h', 'i', 'j', 'k', 'l', 'm', 'n',\
					'o', 'p', 'q', 'r', 's', 't', 'u',\
					'v', 'w', 'x', 'y', 'z'};

	while (n != 0)
	{
		len--;
		if (base >= 10 && n % base >= 10)
		{
			(*str)[len] = tab_base[(n % base) - 10];
		}
		else
		{
			(*str)[len] = (n % base) + 48;
		}
		n = n / base;
	}
}

char						*ft_itoa_base_ll(long long n, unsigned int base)
{
	char					*str;
	size_t					len;

	len = ft_nbrlen_ll(n, base);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	if (base == 10 && n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[len] = '\0';
	if (n == 0)
		str[--len] = '0';
	else
	{
		ft_base_ll(len, &str, base, n);
	}
	return (str);
}
