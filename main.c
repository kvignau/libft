/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:46:00 by kvignau           #+#    #+#             */
/*   Updated: 2015/11/30 15:38:47 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char	test[20] = "abc";
	//char	test1[8] = "sc";

	ft_putnbr(ft_strlcat(test, "abcdefghijklmnop", 10));
	ft_putnbr(strlcat(test, "abcdefghijklmnop", 10));
	return (0);
}
