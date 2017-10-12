/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 05:52:25 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/03 02:02:57 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static unsigned int	get_abs_value_fd(int n)
{
	unsigned int nbr;

	if (n < 0)
		nbr = ~(n - 1);
	else
		nbr = n;
	return (nbr);
}

void				ft_putnbr_fd(int n, int fd)
{
	unsigned int absolute_nbr;

	absolute_nbr = get_abs_value_fd(n);
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (absolute_nbr >= 10)
	{
		ft_putnbr_fd(absolute_nbr / 10, fd);
		ft_putnbr_fd(absolute_nbr % 10, fd);
	}
	else
		ft_putchar_fd(absolute_nbr + '0', fd);
}
