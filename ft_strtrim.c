/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:45:54 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/14 12:55:02 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;

	j = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	res = malloc(sizeof(char) * (j - i + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s1[i], j - i + 1);
	return (res);
}
