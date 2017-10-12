/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 04:31:04 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/12 01:02:30 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *d;
	char *tmp_s;
	char *tmp_d;

	if (!s)
		return (NULL);
	else
	{
		if (!(d = ft_strnew(len)))
			return (NULL);
		tmp_s = (char *)s;
		tmp_d = d;
		while (tmp_s != &s[start])
			tmp_s++;
		while (*tmp_s && len--)
			*tmp_d++ = *tmp_s++;
		return (d);
	}
}
