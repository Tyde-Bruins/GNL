/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 10:58:42 by tbruins           #+#    #+#             */
/*   Updated: 2018/06/02 11:09:32 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*nstr;
	size_t	i;

	if (!s)
		return (NULL);
	nstr = ft_strnew(len);
	if (!nstr)
		return (NULL);
	i = -1;
	while (++i < len)
		*(nstr + i) = *(s + start++);
	return (nstr);
}
