/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 04:03:40 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/12 01:05:10 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_wordcount(char *s, char c)
{
	size_t word_count;
	size_t word;
	size_t i;

	word_count = 0;
	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			if (!word)
			{
				word = 1;
				word_count++;
			}
			i++;
		}
		word = 0;
	}
	return (word_count);
}
