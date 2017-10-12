/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 03:44:34 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/29 03:46:19 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;

	if (!*little)
		return ((char *)big);
	while (*big)
	{
		if (*big == *little)
		{
			i = 1;
			while (*(big + i) && *(big + i) == *(little + i))
				i++;
			if (*(little + i) == 0)
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
