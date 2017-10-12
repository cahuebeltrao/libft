/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 05:52:25 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/28 02:06:39 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

#define CHAR_BIT 8

static unsigned int	get_abs_value(int n)
{
	unsigned int nbr;

	if (n < 0)
		nbr = ~(n - 1);
	else
		nbr = n;
	return (nbr);
}

void				ft_putnbr(int n)
{
	unsigned int absolute_nbr;

	absolute_nbr = get_abs_value(n);
	if (n < 0)
		ft_putchar('-');
	if (absolute_nbr >= 10)
	{
		ft_putnbr(absolute_nbr / 10);
		ft_putnbr(absolute_nbr % 10);
	}
	else
		ft_putchar(absolute_nbr + '0');
}
