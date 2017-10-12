/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 02:49:51 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/12 00:54:43 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char *mem;

	if ((mem = malloc(size)))
	{
		while (size--)
			*(mem + size) = 0;
		return ((void *)mem);
	}
	else
		return (NULL);
}
