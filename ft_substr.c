/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:56:28 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/14 12:54:38 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	st;
	size_t	i;

	i = 0;
	st = (size_t)start;
	if (!s)
		return (NULL);
	if (start >= (size_t)ft_strlen(s))
		len = 0;
	else if ((size_t)ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = s[st];
		st++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
