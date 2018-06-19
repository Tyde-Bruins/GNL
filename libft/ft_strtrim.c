/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 12:17:20 by tbruins           #+#    #+#             */
/*   Updated: 2018/06/07 12:16:30 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char	*nstr;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	while (*s && IS_WHITESPACE(*s))
		s++;
	len = ft_strlen(s) == 0 ? 0 : ft_strlen(s) - 1;
	if (len > 0)
	{
		while (IS_WHITESPACE(s[len]))
			len--;
		len++;
	}
	if (!(nstr = (char *)malloc(sizeof(*nstr) * len + 1)))
		return (NULL);
	nstr[len] = '\0';
	i = 0;
	while (len--)
		nstr[i++] = *s++;
	return (nstr);
}
