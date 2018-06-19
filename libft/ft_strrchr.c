/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:26:45 by tbruins           #+#    #+#             */
/*   Updated: 2018/05/31 10:24:22 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	*bin;
	size_t	len;

	count = 0;
	bin = (char *)s;
	len = ft_strlen(bin);
	if (bin)
	{
		while (count < (int)len)
		{
			count++;
			bin++;
		}
		while (count >= 0)
		{
			if (*bin == (char)c)
				return (bin);
			bin--;
			count--;
		}
	}
	return (NULL);
}
