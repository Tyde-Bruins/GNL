/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:57:37 by tbruins           #+#    #+#             */
/*   Updated: 2018/06/06 07:40:32 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char *source;
	size_t				i;

	dest = dst;
	source = src;
	i = 0;
	if (source < dest)
	{
		while (len--)
			dest[len] = source[len];
	}
	else
		ft_memcpy(dest, source, len);
	return (dest);
}
