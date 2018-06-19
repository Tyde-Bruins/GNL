/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 09:39:15 by tbruins           #+#    #+#             */
/*   Updated: 2018/06/04 16:11:20 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*out;
	int		i;

	i = 0;
	if (!(out = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i < (int)size)
		*(out + i++) = '\0';
	*(out + i) = '\0';
	return (out);
}
