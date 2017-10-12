/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 04:14:07 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/12 01:06:09 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_wordsplit(char const *s, char c)
{
	char	*start;
	char	*tmp;
	int		end;
	size_t	i;

	start = 0;
	tmp = 0;
	end = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (*s && ft_iscchar((char)*s, c))
		s++;
	start = (char *)s;
	tmp = start;
	while (*start && !ft_iscchar(*start, c))
		start++;
	if (*start)
		start = 0;
	return (tmp);
}
