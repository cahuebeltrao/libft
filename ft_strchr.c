/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 01:52:54 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/27 02:06:48 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	s_len;
	char	*s_c;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	s_c = (char *)s;
	while (i <= s_len)
	{
		if (s[i] == c)
			return (&s_c[i]);
		i++;
	}
	return (0);
}
