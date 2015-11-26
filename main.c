/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:46:00 by kvignau           #+#    #+#             */
/*   Updated: 2015/11/26 09:59:54 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char	test[] = "";
	char	test1[] = "";
	int		c = 'a';
	size_t	len = 0;

	ft_putstr("strstr: ");
	ft_putstr(strstr(test, test1));
	ft_putstr("\nft_strstr: ");
	ft_putstr(ft_strstr(test, test1));
	ft_putstr("\nft_memchr: ");
	ft_putstr(ft_memchr(test, c, len));
	ft_putstr("\nft_memmove: ");
	ft_putstr(ft_memmove(test + 1, test, len));
	ft_putstr("\nft_memcpy: ");
	ft_putstr(ft_memcpy(test, test1, len));
	ft_putstr("\nft_memccpy: ");
	ft_putstr(ft_memccpy(test, test1, c, len));
	ft_putstr(ft_memccpy(test, test1, c, len));
	ft_putstr("\nft_bzero: ");
	ft_putstr(ft_bzero(test, len));
	return (0);
}
