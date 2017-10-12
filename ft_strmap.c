/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 04:31:04 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/12 01:00:44 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *d;
	char *tmp;

	if (!s)
		return (NULL);
	else
	{
		if (!(tmp = ft_strnew(ft_strlen(s))))
			return (NULL);
		d = tmp;
		while (*s)
			*d++ = f(*s++);
		return (tmp);
	}
}
