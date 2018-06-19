/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:25:10 by tbruins           #+#    #+#             */
/*   Updated: 2018/06/06 12:05:22 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	int			found;
	int			i;
	int			o;
	int			p;
	const char	*h;

	i = -1;
	found = 1;
	h = hay;
	if (!ft_strlen(nee))
		return ((char *)h);
	while (*(h + ++i) && i < (int)len)
	{
		o = 0;
		if (*(h + i) == *nee)
		{
			p = i;
			found = 1;
			while (*(nee + o) && *(h + p) && o < (int)len && p < (int)len)
				found = (*(h + p++) == *(nee + o++) ? 1 : 0);
			if (found && !*(nee + o))
				return ((char *)(h + i));
		}
	}
	return (NULL);
}
