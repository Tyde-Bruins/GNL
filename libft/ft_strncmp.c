/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:14:19 by tbruins           #+#    #+#             */
/*   Updated: 2018/06/07 09:17:33 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while ((*(unsigned char *)s1++ == *(unsigned char *)s2++) && (i < (int)n))
	{
		if (*(unsigned char *)s1 == '\0' && *(unsigned char *)s2 == '\0')
			return (0);
		i++;
	}
	if (i == (int)n)
		return (0);
	return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
}
