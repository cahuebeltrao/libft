/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 03:40:11 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/11 01:31:41 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**d;
	int		word_count;
	long	first_letter;
	int		word_len;
	size_t	i;

	d = 0;
	word_count = 0;
	first_letter = -1;
	word_len = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (!(d = (char **)ft_memalloc(((ft_wordcount((char *)s, c)) + 1) * sizeof(char *))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			if (first_letter < 0)
			{
				word_count++;
				first_letter = i;
			}
			i++;
		}
		if (word_count && first_letter >= 0)
		{
			word_len = (i - first_letter);
			if (!(*(d + (word_count - 1)) = (char *)ft_memalloc((word_len + 1) * sizeof(char))))
				return (NULL);
			d[word_count - 1] = ft_strsub(s, first_letter, word_len);
			first_letter = -1;
		}
	}
	return (d);
}
