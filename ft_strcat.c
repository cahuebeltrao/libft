/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 22:26:41 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/29 03:47:08 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	char *s1_c;
	char *s2_c;

	s1_c = (char *)s1;
	s2_c = (char *)s2;
	while (*s1_c)
		s1_c++;
	while (*s2_c)
		*s1_c++ = *s2_c++;
	*s1_c = 0;
	return (s1);
}
