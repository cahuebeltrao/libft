/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 01:25:15 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/27 01:33:03 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_u;
	unsigned char	*s2_u;

	i = 0;
	s1_u = (unsigned char *)s1;
	s2_u = (unsigned char *)s2;
	while ((s1_u[i] || s2_u[i]) && i < n)
	{
		if (s1_u[i] == s2_u[i])
			i++;
		else
			return (s1_u[i] - s2_u[i]);
	}
	return (0);
}
