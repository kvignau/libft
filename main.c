/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:46:00 by kvignau           #+#    #+#             */
/*   Updated: 2015/11/26 12:43:35 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char	test[] = "12";

	ft_putstr("atoi: ");
	ft_putnbr(atoi(test));
	ft_putstr("\nft_atoi: ");
	ft_putnbr(ft_atoi(test));
	return (0);
}
