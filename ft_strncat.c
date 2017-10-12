/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 03:25:50 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/29 03:46:43 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char *s1_c;
	char *s2_c;

	s1_c = (char *)s1;
	s2_c = (char *)s2;
	while (*s1_c)
		s1_c++;
	while (*s2_c && n--)
		*s1_c++ = *s2_c++;
	*s1_c = 0;
	return (s1);
}
