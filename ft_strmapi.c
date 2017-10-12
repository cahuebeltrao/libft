/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 04:31:04 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/12 01:01:25 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*d;
	char			*tmp;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	else
	{
		if (!(tmp = ft_strnew(ft_strlen(s))))
			return (NULL);
		d = tmp;
		while (*s)
			*d++ = f(i++, *s++);
		return (tmp);
	}
}
