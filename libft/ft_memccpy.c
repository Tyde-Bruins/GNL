/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 18:21:43 by tbruins           #+#    #+#             */
/*   Updated: 2018/06/07 13:38:19 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dst,
		const void *src, int c, size_t n)
{
	unsigned char		*dest;
	unsigned char		*source;
	size_t				i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = -1;
	while (++i < n)
	{
		dest[i] = source[i];
		if (source[i] == (unsigned char)c)
		{
			return (dest + i + 1);
		}
	}
	return (NULL);
}
