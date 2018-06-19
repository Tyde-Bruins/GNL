/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 15:36:27 by tbruins           #+#    #+#             */
/*   Updated: 2018/06/05 15:29:46 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*nstr;
	int		i;

	i = -1;
	if (!s)
		return (NULL);
	if (!(nstr = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (*(s + ++i))
		*(nstr + i) = f(i, *(s + i));
	return (nstr);
}
