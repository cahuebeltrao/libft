/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 15:19:29 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/29 03:41:40 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str_u;

	str_u = (unsigned char *)s;
	while (n--)
	{
		if (*str_u++ == (unsigned char)c)
			return (--str_u);
	}
	return (NULL);
}
