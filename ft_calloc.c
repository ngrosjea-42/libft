/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:36:46 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/14 12:49:54 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*dest;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (0);
	dest = malloc(size * nmemb);
	if (dest == 0)
		return (0);
	ft_bzero(dest, nmemb * size);
	return (dest);
}
