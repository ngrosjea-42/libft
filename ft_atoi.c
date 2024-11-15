/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:09:23 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/14 14:34:56 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	l;
	int	negativ;
	int	result;

	result = 0;
	negativ = 1;
	l = 0;
	while ((str[l] > 8 && str[l] < 14) || (str[l] == ' '))
		l++;
	if ((str[l] == '-') || (str[l] == '+'))
	{
		if (str[l] == '-')
			negativ = negativ * -1;
		l++;
	}
	while (str[l] && str[l] >= '0' && str[l] <= '9')
	{
		result = result * 10 + (str[l] - '0');
		l++;
	}
	return (result * negativ);
}
