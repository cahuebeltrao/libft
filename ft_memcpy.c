/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 03:19:21 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/29 03:48:03 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *dst_address;
	unsigned char *src_address;

	dst_address = dst;
	src_address = (unsigned char*)src;
	while (n--)
	{
		*dst_address++ = *src_address++;
	}
	return (dst);
}
