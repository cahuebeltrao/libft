/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 02:39:07 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/12 00:53:32 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int	ft_intlen(int n)
{
	int len;

	len = 1;
	if (n < 0)
		return (ft_intlen((n == -2147483648) ? 2147483647 : -n));
	if (n < 10)
		return (1);
	return (1 + ft_intlen(n / 10));
}

static unsigned int	get_abs_value(int n)
{
	unsigned int abs_n;

	if (n < 0)
		abs_n = ~(n - 1);
	else
		abs_n = n;
	return (abs_n);
}

char	*ft_itoa(int n)
{
	int				len;
	int				sign;
	char			*d;
	unsigned int	abs_n;

	len = ft_intlen(n);
	sign = 0;
	d = 0;
	if (n < 0)
		sign = 1;
	abs_n = get_abs_value(n);
	if (!(d = (char *)ft_memalloc(len + sign + 1)))
		return (NULL);
	if (sign)
	{
		d[0] = '-';
		while (abs_n > 9)
		{
			d[len--] = ((abs_n % 10) + '0');
			abs_n /= 10;
		}
		d[len] = (abs_n + '0');
	}
	if (!sign)
	{
		if (n == 0)
		{
			d[0] = '0';
			return (d);
		}
		while (abs_n > 9)
		{
			d[--len] = ((abs_n % 10) + '0');
			abs_n /= 10;
		}
		d[--len] = (abs_n + '0');
	}
	return (d);
}
