/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:32:12 by tbruins           #+#    #+#             */
/*   Updated: 2018/06/04 16:39:53 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	wd_count;
	char	**arr;

	if (!s)
		return (NULL);
	wd_count = ft_wdcount(s, c);
	arr = (char **)malloc(sizeof(char *) * (wd_count + 1));
	ft_arrstr(s, arr, c, wd_count);
	if (!arr)
		return (NULL);
	return (arr);
}
