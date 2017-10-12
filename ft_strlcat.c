/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 22:26:41 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/12 01:00:15 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	char	*tmp;
	int		i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	tmp = dst;
	i = 0;
	while (*tmp)
		tmp++;
	while (i++ < (int)size - (int)dstlen - 1)
		*tmp++ = *src++;
	return (size > dstlen ? srclen + dstlen : srclen + size);
}
