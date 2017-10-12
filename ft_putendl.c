/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 01:36:37 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/10/12 00:56:04 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl(char const *s)
{
	char nl;

	nl = '\n';
	if (s)
	{
		write(1, s, ft_strlen(s));
		write(1, &nl, 1);
	}
}