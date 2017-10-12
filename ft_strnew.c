/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 03:06:35 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/12 01:01:54 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;
	int		i;

	if (!(tmp = malloc(size + 1)))
		return (NULL);
	i = 0;
	while (i < (int)size + 1)
		*(tmp + i++) = 0;
	return (tmp);
}
