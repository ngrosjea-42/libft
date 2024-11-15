/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrosjea <ngrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:27:47 by ngrosjea          #+#    #+#             */
/*   Updated: 2024/11/14 12:14:30 by ngrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;

	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	if (dest < src)
	{
		while (n--)
			*destination++ = *source++;
	}
	if (dest > src)
	{
		destination += n -1;
		source += n -1;
		while (n--)
			*destination-- = *source--;
	}
	return (dest);
}
