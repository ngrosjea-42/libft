/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:31:38 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/14 12:42:48 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long int len)
{
	int	i;

	i = 1;
	if (len == 0)
		return (i);
	if (len < 0)
	{
		len = -len;
		i++;
	}
	if (len == 0)
		return (0);
	while (len >= 10)
	{
		len = len / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	i;
	long int	temp;

	i = ft_intlen((long)n);
	temp = (long)n;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (temp == 0)
		str[0] = '0';
	if (temp < 0)
	{
		str[0] = '-';
		temp = -temp;
	}
	while (temp > 0)
	{
		i--;
		str[i] = (temp % 10) + '0';
		temp = temp / 10;
	}
	return (str);
}
