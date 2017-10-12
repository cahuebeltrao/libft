/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 01:08:17 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/12 00:59:45 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *d;
	char *d_t;

	d_t = 0;
	d = 0;
	if (s1 && s2)
	{
		if (!(d = ft_strnew(sizeof(s1) + sizeof(s2))))
			return (NULL);
		d_t = d;
		while (*s1)
			*d++ = *s1++;
		while (*s2)
			*d++ = *s2++;
		*(d++) = '\0';
		return (d_t);
	}
	return (NULL);
}
