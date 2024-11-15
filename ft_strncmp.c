/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:07:25 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/14 14:43:40 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	l;

	l = 0;
	if (n == 0)
		return (0);
	while (s1[l] && s2[l] && s1[l] == s2[l] && n != 1)
	{
		n--;
		l++;
	}
	return (((unsigned char *)s1)[l] - ((unsigned char *)s2)[l]);
}
