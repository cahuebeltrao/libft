/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 02:32:06 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/30 02:32:30 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!*little)
		return ((char *)big);
	while (*big)
	{
		if (*big == *little)
		{
			i = 1;
			while (*(big + i) && *(big + i) == *(little + i) && (len--))
				i++;
			if (*(little + i) == 0)
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
