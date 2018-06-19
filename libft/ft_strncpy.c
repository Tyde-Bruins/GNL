/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:30:38 by tbruins           #+#    #+#             */
/*   Updated: 2018/06/06 13:48:06 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*dest;
	size_t	i;

	dest = dst;
	i = -1;
	while (++i < len)
	{
		if (*src)
			*dest++ = *src++;
		else
			while (i++ < len)
				*dest++ = '\0';
	}
	return (dst);
}
