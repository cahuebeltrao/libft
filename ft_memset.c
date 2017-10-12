/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 00:50:24 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/28 02:05:10 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *b_uc;
	unsigned char i;

	b_uc = b;
	i = c;
	while (len > 0)
	{
		*b_uc++ = i;
		len--;
	}
	return (unsigned char *)b;
}
