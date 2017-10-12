/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 16:13:26 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/29 03:45:39 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char s1_u;
	unsigned char s2_u;

	while (n-- > 0)
	{
		s1_u = *(unsigned char *)s1++;
		s2_u = *(unsigned char *)s2++;
		if (s1_u != s2_u)
			return (s1_u - s2_u);
	}
	return (0);
}
