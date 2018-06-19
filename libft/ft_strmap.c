/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 15:06:51 by tbruins           #+#    #+#             */
/*   Updated: 2018/06/05 11:51:48 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*nstr;
	int		i;

	i = -1;
	if (!s)
		return (NULL);
	if (!(nstr = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (*(s + ++i))
		*(nstr + i) = f(*(s + i));
	return (nstr);
}
