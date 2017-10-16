/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 02:32:06 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/15 17:24:05 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		if (*big == *little)
		{
			i = 1;
			while (*(big + i) && *(big + i) == *(little + i))
				i++;
			if (*(little + i) == 0 && len >= i)
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
