/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:51:40 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/14 12:55:12 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char *s, char c)
{
	size_t	i;
	size_t	nbword;

	i = 0;
	nbword = 0;
	if (!s || s[i] == '\0')
		return (0);
	if (s[i] != c)
		nbword++;
	while (s[i])
	{
		while (s[i] == c)
		{
			if (s[i + 1] != c && s[i + 1] != '\0')
				nbword++;
			i++;
		}
		i++;
	}
	return (nbword);
}

static char	**ft_free(char **tab_str)
{
	size_t	i;

	i = 0;
	while (tab_str[i])
	{
		free(tab_str[i]);
		i++;
	}
	free(tab_str);
	return (NULL);
}

static char	**count_nbletter(const char *s, char c, size_t i, size_t nbword)
{
	size_t	st;
	char	**tab_str;

	st = 0;
	tab_str = malloc(sizeof(char *) * (word_count((char *)s, c) + 1));
	if (!tab_str)
		return (0);
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		st = i;
		while (s[i] && s[i] != c)
			i++;
		tab_str[nbword++] = ft_substr(s, st, i - st);
		if (!tab_str[nbword - 1])
			return (ft_free(tab_str));
		if (s[i])
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	tab_str[nbword] = NULL;
	return (tab_str);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (count_nbletter(s, c, 0, 0));
}
