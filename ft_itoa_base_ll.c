/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_ll.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 11:15:05 by kvignau           #+#    #+#             */
/*   Updated: 2016/01/27 11:30:15 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void					ft_base_ll(size_t len, char **str,
		unsigned int base, long long n)
{
	char					*tab_base;

	tab_base = ft_strnew(25);
	tab_base = "abcdefghijklmnopqrstuvwxyz";
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
	if (n < 0)
		n = -n;
	str[len] = '\0';
	if (n == 0)
		str[--len] = '0';
	else
	{
		ft_base_ll(len, &str, base, n);
	}
	return (str);
}
