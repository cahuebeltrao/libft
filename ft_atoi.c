/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeltrao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 17:05:25 by cbeltrao          #+#    #+#             */
/*   Updated: 2017/09/20 18:31:26 by cbeltrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	result;
	int		i;
	int		sign;

	sign = 0;
	i = 0;
	result = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\v' || str[i] == '\r' ||
			str[i] == '\n' || str[i] == '\t' || str[i] == '\f'))
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (sign)
		return (-result);
	else
		return (result);
}
