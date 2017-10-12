/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 02:07:50 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/29 03:47:41 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (d < s)
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	else if (d > s)
	{
		while (len-- > 0)
			*(d + len) = *(s + len);
	}
	return (dst);
}
