/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvignau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:46:00 by kvignau           #+#    #+#             */
/*   Updated: 2015/11/26 14:58:36 by kvignau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char	coucou[20] = "aa";
	//char	test1[8] = "sc";

	ft_putstr("strlcat: ");
	ft_putnbr(strlcat("ohoho", coucou, 2));
	ft_putstr("\nft_strlcat: ");
	ft_putnbr(ft_strlcat("ohoho", coucou, 2));
	return (0);
}
